// operator_overloading_test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point p1(1, 2, 3);
	Point p2(5, 6, 7);

	cout << p1 << " " << p2 << endl;
	
	return 0;
}
