// 7_5 various_return_value.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <tuple>

using namespace std;

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}

//int& getValue(int x)
//{
//	int value = x * 2;
//	return value;
//}

//int* allocateMemory(int size)
//{
//	return new int[size];
//}

//int& get(std::array<int, 100>& my_array, int ix)
//{
//	return my_array[ix];
//}

//struct S
//{
//	int a, b, c, d;
//};
//
//S getStruct()
//{
//	S my_s{ 1, 2, 3, 4 };
//}

int main()
{
	auto[a, d] = getTuple();
	cout << a << endl;
	cout << d << endl;

	//std::tuple<int, double> my_tp = getTuple();
	//cout << std::get<0>(my_tp) << endl;	// a
	//cout << std::get<1>(my_tp) << endl;	// d

	/*S my_s = getStruct();
	my_s.a;*/


	/*std::array<int, 100> my_array;
	my_array[30] = 10;

	get(my_array, 30) *= 10;

	cout << my_array[30] << endl;*/

	/*int &value = getValue(5);

	cout << value << endl;
	cout << value << endl;*/

	/*int* array = allocateMemory(1024);

	delete[] array;*/

	////단점 복사, 변수가 여러개 생성된다.
	////사라질 변수를 디레퍼런싱 하는 게 아무래도 안전하진 않다.
	//int *value = getValue(3);

	//cout << *value << endl;

	return 0;
}

