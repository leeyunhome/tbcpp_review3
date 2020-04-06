// 6_5_multidimensionalarray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_columns = 5;

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
			cout << '[' << row << ']' << '[' << col << ']' << '\t';

		cout << endl;
	}
	cout << endl;

	int array[5][4][3];


	//int array[][num_columns] // row-major <-> column-major
	//{
	//	{1, 2, 3, 4, 5},		// row 0
	//	{6, 7, 8, 9, 10},		// row 1
	//	{11, 12, 13, 14, 15}	// row 2
	//};

	//for (int row = 0; row < num_rows; ++row)
	//{
	//	for (int col = 0; col < num_columns; ++col)
	//		cout << array[row][col] << '\t';
	//		//cout << (int)&array[row][col]  << '\t';

	//	cout << endl;
	//}
	//cout << endl;

	

	return 0;
}

