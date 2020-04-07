// 9_5_증감연사자오버로딩.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Digit
{
private:
	int m_digit;

public:
	Digit(int digit = 0) : m_digit(digit) {}

	// prefix
	Digit& operator++()
	{
		++m_digit;
		return *this;
	}

	// post
	Digit operator++(int)
	{
		Digit temp{ m_digit };
		++(*this);
		return temp;
	}

	friend std::ostream& operator<<(std::ostream& out, const Digit& digit)
	{
		out << digit.m_digit;
		return out;
	}
};

int main()
{
	using namespace std;

	Digit digit1{ 5 };

	cout << ++digit1 << endl;
	cout << digit1 << endl;

	cout << "====postfix == =" << endl;

	cout << digit1++ << endl;
	cout << digit1 << endl;


	return 0;
}

