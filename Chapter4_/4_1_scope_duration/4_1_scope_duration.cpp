// 4_1_scope_duration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

namespace work1::work11::work111
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}

int main()
{
	using namespace std;

	work1::work11::work111::doSomething();

	//work1::a;
	//work1::doSomething();

	//work2::a;
	//work2::doSomething();

	/*int apple = 5;

	cout << apple << endl;

	{
		int apple2 = 1;
		cout << apple2 << endl;
	}

	cout << apple << endl;*/

}

