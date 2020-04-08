// 6_20_std_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	array<int, 5> my_arr = { 1, 21, 37, 4, 5 };

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	std::sort(my_arr.rbegin(), my_arr.rend());

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	//my_arr = { 0, 1, 2, 3, 4};
	//my_arr = { 0, 1, 2, };

	//cout << my_arr.size() << endl;

	//printLength(my_arr);
	///*cout << my_arr[10] << endl;
	//cout << my_arr.at(10) << endl;*/

	return 0;
}

