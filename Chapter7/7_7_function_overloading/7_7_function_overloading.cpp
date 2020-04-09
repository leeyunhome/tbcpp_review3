// 7_7_function_overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//double add(double x, double y)
//{
//	return x + y;
//}

void getRandomValue(int &x) {}

void getRandomValue(double &x) {}

typedef int my_int;

//void print(int x) {}
//void print(my_int x) {}

//void print(const char* value) {}
//void print(int value) {}

void print(unsigned int value) {}
void print(float value) {}

int main()
{
	print((unsigned int)'a');
	print(0u);
	print(3.14159f);

	/*print(0);
	print("a");*/

	//int x;
	//getRandomValue(x);

	//add(1, 2);
	//add(3.0, 4.0);

	return 0;
}
