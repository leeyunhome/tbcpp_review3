// 15_3_std_move.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

template<class T>
void MySwap(T& a, T& b)
{
	/*T tmp = a;
	a = b;
	b = tmp;*/

	T tmp{ std::move(a) };
	a = std::move(b);
	b = std::move(tmp);
}
int main()
{
	//{
	//	vector<string> v;
	//	string str = "Hello";

	//	v.push_back(str);

	//	cout << str << endl;
	//	cout << v[0] << endl;

	//	v.push_back(std::move(str));

	//	cout << str << endl;
	//	cout << v[0] << " " << v[1] << endl;
	//}

	{
		std::string x{ "abc" };
		std::string y{ "de" };

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;

		MySwap(x, y);

		std::cout << "x: " << x << std::endl;
		std::cout << "y: " << y << std::endl;
	}

	return 0;
}
