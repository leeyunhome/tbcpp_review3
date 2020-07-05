// 2.3 c++ 11 Fixed-width Integers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	using namespace std;

	std::int16_t i(5);
	std::int8_t myint = 65;

	cout << myint << endl;

	std::int_fast8_t fi(5);
	std::int_least64_t fl(5);

	return 0;
}

