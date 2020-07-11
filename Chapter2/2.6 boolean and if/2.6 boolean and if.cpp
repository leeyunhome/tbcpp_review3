// 2.6 boolean and if.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}

int main()
{
	using namespace std;

	int number;
	cout << "Input an integer number" << endl;
	while (cin >> number)
	{
		if (number % 2 == 0)
			cout << "even number" << endl;
		else
		cout << "odd number" << endl;
	}
	//cout << std::boolalpha;
	//cout << isEqual(1, 1) << endl;
	//cout << isEqual(0, 3) << endl;

	//bool b;
	//cin >> b;
	//cout << std::boolalpha;
	//cout << "Your input : " << b << endl;

	//if (0) // 0이면 false, 그 외엔 true
	//{
	//	cout << "True" << endl;
	//}
	//else
	//	cout << "False" << endl;

	//bool b1 = true;	// copy initialization
	//bool b2(false); // direct '''
	//bool b3{ true }; // uniform ini '''
	//b3 = false;

	//if (3 > 1)
	//{
	//	cout << "This is true" << endl;
	//	cout << "True second line" << endl;
	//}
	//else
	//{
	//	cout << "This is false" << endl;
	//}

	//cout << std::boolalpha;
	//cout << (true || true) << endl;
	//cout << (true || false) << endl;
	//cout << (false || true) << endl;
	//cout << (false || false) << endl;

	//cout << b3 << endl;
	//cout << b1 << endl;
	//cout << "=====" << endl;
	//cout << !b1 << endl;
	//cout << !b2 << endl;

	return 0;
}
