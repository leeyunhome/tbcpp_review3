// Chapter18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // exit()
#include <sstream>

using namespace std;

int main()
{
	// writing
	if (true)
	{
		ofstream ofs("my_first_file.dat", ios::app);	// ios::app, ios::binary
		//ofs.open("my_first_file.dat");

		if (!ofs)
		{
			cerr << "Couldn't open file " << endl;
			exit(1);
		}
		
		//ofs << "Line 1" << endl;
		//ofs << "Line 2" << endl;

		/*const unsigned num_data = 10;
		ofs.write((char*)&num_data, sizeof(num_data));

		for (int i = 0; i < num_data; ++i)
			ofs.write((char*)&i, sizeof(i));*/

		stringstream ss;
		ss << "Line 1" << endl;
		ss << "Line 2" << endl;
		string str = ss.str();

		unsigned str_length = str.size();
		ofs.write((char*)&str_length, sizeof(str_length));
		ofs.write(str.c_str(), str_length);

		// ofs.close();	// not necessary
	}

	// reading
	if (true)
	{
		ifstream ifs("my_first_file.dat");

		if (!ifs)
		{
			cerr << "Cannot open file" << endl;
			exit(1);
		}

		while (ifs)
		{
			std::string str;
			getline(ifs, str);

			std::cout << str << endl;
		}

		/*unsigned num_data = 0;
		ifs.read((char*)&num_data, sizeof(num_data));

		for (unsigned i = 0; i < num_data; ++i)
		{
			int num;
			ifs.read((char*)&num, sizeof(num));

			std::cout << num << endl;
		}*/

		unsigned str_len = 0;
		ifs.read((char*)&str_len, sizeof(str_len));

		string str;
		str.resize(str_len);
		ifs.read(&str[0], str_len);

		cout << str << endl;

		//ifs.close();	// not necessary
	}

	return 0;
}

