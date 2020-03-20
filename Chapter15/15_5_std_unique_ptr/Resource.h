#pragma once
#include <iostream>

class Resource
{
private:
	int *m_data;
	int m_length;

public:
	Resource(unsigned int length=0)
		: m_length(length)
	{
		m_data = new int[length];
		std::cout << "Resource length constructed" << std::endl;
	}
	~Resource()
	{
		std::cout << "Resource destroyed" << std::endl;
	}
	void setAll(const int& input)
	{
		for (int i = 0; i < m_length; ++i)
		{
			m_data[i] = input;
		}
	}

	void print()
	{
		for (int i = 0; i < m_length; ++i)
		{
			std::cout << m_data[i] << " ";
		}
		std::cout << std::endl;
	}
};