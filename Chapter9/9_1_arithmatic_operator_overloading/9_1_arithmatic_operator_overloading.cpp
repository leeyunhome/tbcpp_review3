// 9_1_arithmatic_operator_overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(const int& cents_in = 0)
		: m_cents(cents_in)
	{

	}
	
	int getCents() const
	{
		return m_cents;
	}

	int& getCents()
	{
		return m_cents;
	}

	friend std::ostream& operator<<(std::ostream& out, const Cents& c)
	{
		out << c.m_cents;
		return out;
	}

	// =, [], (), ->
	Cents operator+(const Cents& c2)
	{
		//c_out = c1.getCents() + c2.getCents();
		return Cents(this->m_cents + c2.m_cents);
	}

};

//Cents operator+(const Cents& c1, const Cents& c2)
//{
//	//c_out = c1.getCents() + c2.getCents();
//	return Cents(c1.getCents() + c2.getCents());
//}


int main()
{
	Cents cents1(6);
	Cents cents2(8);

	//cout << cents1 + cents2 << endl;
	cout << cents1 + cents2 + Cents(6) + Cents(10)+ Cents(100) << endl;

	//cout << add(cents1, cents2).getCents() << endl;

	//int i = 6, j = 8; cout << i + j << endl;


	// ?: :: sizeof . .*
	// ^

	return 0;
}
