// Chapter18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <typeinfo>
using namespace std;

struct Something
{
	int a, b, c, d; // 4 * 4 = 16
};
int main()
{
	int x = 5;
	double d = 123.0;

	int* ptr_x;
	double* ptr_d;

	cout << *ptr_x << endl;

	/*cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;

	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;

	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;*/


	//int x;

	//int y, z = 1024;

	//y = intptr_t(&z);

	//x = (int)y;

	//cout << *x << endl;// prints 1024 correctly.

	/*int x = 5;
	double d = 123.0;

	int* ptr_x = &x;

	cout << typeid(ptr_x).name() << endl;*/


	/*double* ptr_d = &d;

	cout << ptr_x << endl;
	cout << *ptr_x << endl;
	
	cout << ptr_d << endl;
	cout << *ptr_d << endl;*/

	//cout << x << endl;
	//cout << &x << endl;	// & : address-of operator
	//cout << (int)&x << endl;

	//// de-reference operator (*)

	//cout << *&x << endl;

	return 0;
}
