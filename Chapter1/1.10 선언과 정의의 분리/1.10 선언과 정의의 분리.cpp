// 1.10 선언과 정의의 분리.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int add(int a, int b); // forward declaration

int main()
{
	cout << add(1, 2) << endl;

	return 0;
}

// definition
int add(int a, int b)
{
	return a + b;
}