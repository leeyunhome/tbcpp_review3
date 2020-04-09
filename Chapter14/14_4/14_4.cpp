// 14_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	try
	{
		std::string s;
		s.resize(-1);
	}
	catch (std::exception & exception)
	{
		std::cerr << exception.what() << std::endl;
	}

	return 0;
}

