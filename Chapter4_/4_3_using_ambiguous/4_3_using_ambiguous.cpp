// 4_3_using_ambiguous.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

namespace a
{
	int my_var(10);
	int count(123111);

}

namespace b
{
	int my_var(20);
}
int main()
{
	using namespace std;

	{
		//using namespace a;
		cout << a::my_var << endl;
		cout << a::count << endl;
	}

	{
		using namespace b;
		cout << my_var << endl;
	}
	return 0;
}
