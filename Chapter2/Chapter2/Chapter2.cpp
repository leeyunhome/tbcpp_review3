// Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	bool bValue = false;
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;


	cout << sizeof aValue << endl;
	cout << sizeof aValue2 << endl;
	cout << sizeof(bool) << endl;

	int i = (int)3.1415; // copy initialization
	int a(123);	// direct initialization
	int b{ 123 }; // uniform initialization

	int k, l, m;

	//cout << chValue << endl;
	//cout << std::boolalpha;
	//cout << bValue << endl;
	//cout << fValue << endl;
	//cout << dValue << endl;

	//cout << (bValue ? 1 : 0 )<< endl;

	/*using namespace std;

	int j = 3;
	int i = -1;
	int k = 123;
	char a = 'H';

	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;*/

	return 0;
}
