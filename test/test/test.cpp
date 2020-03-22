// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	unsigned int i;
	unsigned int number;
	bool isPrime = true;

	cin >> number;

	for (i = 2; (i*i) <= number; ++i)
	{
		if (number % i == 0)
		{
			if (i * i == number)
			{
				cout << number << " is divisible by " << i << endl;

			}
			else
			{
				cout << number << " is divisible by " << i << ", " << number / i << endl;
			}
			isPrime = false;
		}
	}

	if (isPrime == false)
	{
		cout << number << " is not a prime number" << endl;
	}
	else
	{
		cout << number << " is a prime number" << endl;

	}

	return 0;
}
