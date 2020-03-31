// variable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void func(int);

int main()
{
	func(10);

	return 0;
}

void func(int a)
{
	int a = 10;
	std::cout << a << std::endl;
}