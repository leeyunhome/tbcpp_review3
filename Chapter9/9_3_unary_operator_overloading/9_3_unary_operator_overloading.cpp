// 9_3_unary_operator_overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents = 0) { m_cents = cents;  }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	Cents operator-() const
	{
		return Cents(-m_cents);
	}

	bool operator!() const
	{
		return (m_cents == 0) ? true : false;
	}

	friend std::ostream& operator<<(std::ostream& out, const Cents& c)
	{
		out << c.m_cents;
		return out;
	}
};

int main()
{
	using namespace std;

	Cents cents1(6);
	Cents cents2(0);

	cout << !cents1 << " " << !cents2 << endl;

	if (!cents2) {
		cout << "true" << endl;
	}
	/*cout << cents1 << endl;
	cout << -cents1 << endl;
	cout << -Cents(-10) << endl;*/

	return 0;
}
