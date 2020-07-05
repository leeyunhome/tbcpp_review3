// 1.13 네임스페이스.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

namespace MySpace1
{
	namespace InnerSpace
	{
		int my_function()
		{
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

using namespace std;

int main()
{
	using namespace MySpace1::InnerSpace;
	my_function();
	//cout << InnerSpace::my_function() << endl;
	/*cout << doSomething(3, 4) << endl;
	cout << MySpace2::doSomething(3, 4) << endl;*/

	return 0;
}

