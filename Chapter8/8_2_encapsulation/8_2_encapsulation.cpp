// 8_2_encapsulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Date
{
public:
	int m_day;
	int m_month;
	int m_year;

public:
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	// setDay, setYear ...

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}

	const int& getDay()
	{
		return m_day;
	}

	void copyFrom(const Date& date)
	{
		m_year = date.m_year;
		m_day = date.m_day;
		m_month = date.m_month;
	}
};

int main()
{
	Date today;
	today.setDate(8, 4, 2025);
	today.setMonth(10);

	Date copy;
	copy.copyFrom(today);

	copy.m_day = 123;
	today.m_month = 45;

	return 0;
}

