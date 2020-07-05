// 2.2 Integers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <limits>
#include <typeinfo>

int main()
{
	using namespace std;

	//int i = 22 / 4;

	cout << typeid((char)22 / 4).name() << endl;

	//unsigned int i = -2;
	//cout << std::numeric_limits<unsigned int>::max() << endl;

	//cout << i << endl;

	//short s = 1; // 2 bytes = 2 * 8 bits = 16 bits


	///*int	  i = 1;
	//long  l = 1;
	//long long ll = 1;*/

	////cout << sizeof(short) << endl;
	//cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	//cout << std::numeric_limits<short>::max() << endl;
	//cout << std::numeric_limits<short>::min() << endl;
	//cout << std::numeric_limits<short>::lowest() << endl;
	///*cout << sizeof(int) << endl;
	//cout << sizeof(long) << endl;
	//cout << sizeof(long long) << endl;*/
	//s = std::numeric_limits<short>::min();

	//cout << "min() " << s << endl;

	//s -= 1;

	//cout << endl;
	//cout << "-32769? " << s << endl; // overflow

	//{
	//	s = std::numeric_limits<unsigned>::max();

	//	s += 2;
	//	cout << s << endl;
	//}
	

	return 0;
}

