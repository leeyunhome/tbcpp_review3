// outputOperatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"

int main()
{
	using namespace std;

	Point p(1, 2, 3);
	Point p2(7, 8, 9);

	cout << p << " " << p2 << endl;

	return 0;
}

