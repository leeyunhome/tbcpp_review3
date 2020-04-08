// 6_21_std_vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//std::vector<int> array;

	vector<int> arr { 1, 2, 3, 4, 5 };
	arr.resize(2);

	int* my_arr = new int[5];

	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr.size() << endl;
	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	delete[] my_arr;

	/*std::vector<int> array2 = { 1, 2, 3, 4, 5 };

	cout << array2.size() << endl;
	
	std::vector<int> array3 = { 1, 2, 3, };

	cout << array3.size() << endl;
	
	std::vector<int> array4 { 1, 2, 3, };

	cout << array4.size() << endl;*/


	return 0;
}

