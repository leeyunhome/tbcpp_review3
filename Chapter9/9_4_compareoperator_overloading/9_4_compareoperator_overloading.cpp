// 9_4_compareoperator_overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents_in)
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

	bool operator<(const Cents& c)
	{
		return (this->m_cents < c.m_cents) ? true : false;
	}
	bool operator==(const Cents& c)
	{
		if (this->m_cents == c.m_cents)
		{
			return true;
		}

		return false;
	}

	friend std::ostream& operator<<(std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}

};

int main()
{
	using namespace std;

	Cents cents1(6);
	Cents cents2(0);
	std::vector<Cents> my_vec;
	my_vec.push_back(cents1);
	my_vec.push_back(cents2);
	my_vec.push_back(Cents(7));
	my_vec.push_back(Cents(5));

	for (auto& itr : my_vec)
	{
		cout << itr << endl;

	}

	std::sort(my_vec.begin(), my_vec.end());
	for (auto& itr : my_vec)
	{
		cout << itr << endl;

	}

	/*if (cents1 == cents2)
		cout << "Equal" << endl;
	else
		cout << "Not Equal" << endl;*/

	cout << std::boolalpha;

	return 0;
}

