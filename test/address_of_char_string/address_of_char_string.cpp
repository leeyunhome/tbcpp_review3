// address_of_char_string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int i = 10;
	const char* name = "leehyerm";
	int* pi = &i;

	cout << name << endl;
	cout << &pi << endl;
	cout << pi << endl;
	cout << &i << endl;
}

