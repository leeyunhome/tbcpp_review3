// 8.13 익명객체.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; }
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}
class A
{
public:
	int m_value;
	A(const int& value_in)
	{
		cout << "Constructor" << endl;
		m_value = value_in;
	}
	~A()
	{
		cout << "Destructor" << endl;
	}
	void printDouble()
	{
		cout << m_value * 2 << endl;
	}
};
int main()
{
	Cents c1(10);
	Cents c2(20);
	Cents c3 = add(c1, c2);
	cout << c3.getCents() << endl;
	//A a(1);
	//a.printDouble();

	//A(1).printDouble();

	return 0;
}
