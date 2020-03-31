// 4_2_global_static_internallinkage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyConstants.h"

using namespace std;


////int value = 123;
//int a = 1;
//
//void doSomething(int a)
//{
//	//static int a = 1;
//	++a;
//	cout << a << endl;
//}

// forward declaration
extern void doSomething();
//extern int a;

int main()
{
	cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << endl;
	doSomething();

	//int a = 10;

	/*doSomething();

	cout << a << endl;*/
	//doSomething(a);
	
	/*cout << value << endl;
	int value = 1;

	cout << value << endl;
	cout << ::value << endl;*/

	return 0;
}
