// test_decltype.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	auto lambda = []() {return 42.1; };
	decltype(lambda) lambda2(lambda);
	decltype((lambda)) lambda3(lambda);

	cout << "Lambda functions" << endl;
	cout << &lambda << " " << &lambda2 << endl;
	cout << &lambda << " " << &lambda3 << endl;
	auto a = lambda();
	auto b = lambda2();
	auto c = lambda3();

	cout << a << " " << b << " " << c << endl;

	return 0;
}
