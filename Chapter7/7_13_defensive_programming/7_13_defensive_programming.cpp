// 7_13_defensive_programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	// violated assumption

	string hello = "Hello, my name is Jack jack";

	cout << "Input from  0 to " << hello.size() - 1 << endl;
	
	while (true)
	{
		int ix;
		cin >> ix;
		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
		}
		else
		{
			cout << "Please try again" << endl;
		}
	}

	return 0;
}
