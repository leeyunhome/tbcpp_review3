// 8_3_constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	//Fraction() 
	//{
	//	m_numerator = 1;
	//	m_denominator = 1;
	//}

	Fraction(const int& num_in = 1, const int& den_in = 1)
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction() constructor" << endl;
	}

	void print()
	{
		//assert(m_denominator > 0);
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};
class First
{
	Second sec;

public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	First fir;

	//Fraction frac;
	//frac.print();

	//Fraction one_thirds{ 1.0, 3 }; // ������ �̴ϼȶ������̼��� Ÿ�Ժ�ȯ�� ����� ���ؿ�.
	//Fraction one_thirds( 1.0, 3 );

	//one_thirds.print();

	return 0;
}
