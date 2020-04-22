// Chapter20_client.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

int main(int argc, char* argv[]) //argument로 서버의 주소를 입력을 받고 있어요
{
	try
	{
		if (argc != 2)
		{
			std::cerr << "Usage: client <host>" << std::endl;
			return 1;
		}

		tcp::iostream stream(argv[1], std::to_string(int(13)));	// port number 13
		if (!stream)
		{
			std::cout << "Unable to connect: " << stream.error().message() << std::endl;
			return 1;
		}

		// send message to server
		stream << "Hello from client";
		stream << std::endl;	// send new-line to end receiver'stream getline
	
		// receive message from server
		std::string line;
		std::getline(stream, line);
		std::cout << line << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
