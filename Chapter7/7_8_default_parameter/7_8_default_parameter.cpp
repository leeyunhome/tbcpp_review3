// 7_8_default_parameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
//
//void print(int x = 1, int y = 2, int z = 7);	// in header
//
//void print(int x, int y, int z)
//{
//	cout << x << " " << y << " " << z << endl;
//}

void print(int x) {}
void print(int x, int y = 20) {}
int main()
{
	//print(10);
	/*print(10, 20, 30);
	print(5, 2);
	print();*/
	

	return 0;
}

