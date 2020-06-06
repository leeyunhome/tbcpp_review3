// 13.2 클래스 템플릿.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "MyArray.h"

int main()
{
	MyArray<double> my_array(10);

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i + 65;

	my_array.print();

	return 0;
}
