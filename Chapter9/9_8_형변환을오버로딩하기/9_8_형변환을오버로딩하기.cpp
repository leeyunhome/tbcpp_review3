// 9_8_형변환을오버로딩하기.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() { return m_cents; }
	void setCents(int cents) { m_cents = cents; }

	operator int()// int형으로 변환을 하는 형변환을 지금 오버로딩 하고 있는 거예요.
	{
		cout << "cast here" << endl;
		return m_cents;
	}
};

void printInt(const int& value)
{
	cout << value << endl;
}

class Dollar
{
private:
	int m_dollars = 0;

public:
	Dollar(const int& input) : m_dollars(input) {}

	operator Cents()
	{
		return Cents(m_dollars * 100);//1달러가 100센트라는 걸 이용해서
									// 특별한 캐스팅 오퍼레이터를 오버로딩 한 것
	}
};
int main()
{
	Dollar dol(2);

	Cents cents = dol;
	cout << cents << endl;
	//Cents cents(7);
	//int value = (int)cents;
	//value = int(cents);
	//value = static_cast<int>(cents);

	//printInt(cents);// integer로써 출력

	return 0;
}

