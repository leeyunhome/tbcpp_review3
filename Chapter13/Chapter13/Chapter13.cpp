// Chapter13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cents.h"

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

using namespace std;

int main()
{
	cout << getMax(1, 2) << endl;
	cout << getMax(1.1f, 2.2f) << endl;
	cout << getMax(1.1, 2.3) << endl;
	cout << getMax('a', 'c') << endl;

	cout << getMax(Cents(5), Cents(9)) << endl;

	return 0;
}
