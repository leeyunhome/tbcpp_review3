// 1_4_cin_cout.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	using namespace std;

	//int x = 1024;
	//std::cout << "I love this lecture!\n"; // << std::endl;
	//std::cout << "abc" << "\t" << "def" << std::endl;
	//std::cout << "ab" << "\t" << "cdef" << std::endl;

	//cout << "\a" << endl;

	int x = 1;

	cout << "Before your input, x was " << x << endl;
	
	std::cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}

