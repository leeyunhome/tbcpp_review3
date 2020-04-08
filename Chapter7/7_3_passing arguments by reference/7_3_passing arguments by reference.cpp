// 7_3_passing arguments by reference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> // sin(), cos()
#include <vector>
#include "MyConstants.h"

using namespace std;
typedef int* ptrint;

//void foo(int*& ptr);
void foo(ptrint &ptr)
{
	cout << ptr << " " << &ptr << endl;
}

void addOne(int& y)
{
	cout << y << " " << &y << endl;

	y = y + 1;
}

void getSinCos(const double& degrees, double& sin_out, double& cos_out)
{
	//static const double pi = 3.141592;
	
	const double radians = degrees * Constants::pi;
	
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

//void printElements(int (&array)[4])
void printElements(const vector<int>& arr)
{

}
int main()
{
	//int array[]{ 1, 2, 3, 4,  };
	vector<int> arr{ 1, 2, 3, 4 };

	printElements(array);
	//int x = 5;
	////int* ptr = &x;
	//ptrint ptr = &x;

	//cout << ptr << " " << &ptr << endl;

	//foo(ptr);

	//foo(6);

	/*double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;*/

	/*int x = 5;
	cout << x << " " << &x << endl;

	addOne(x);

	cout << x << " " << &x << endl;*/


	return 0;
}

