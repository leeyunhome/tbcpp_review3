#pragma once

#include <iostream>

class Point
{
private:
	int m_x, m_y, m_z;
public:
	Point(const int& x_in, const int& y_in, const int& z_in)
		: m_x(x_in), m_y(y_in), m_z(z_in)
	{};

	friend std::ostream& operator << (std::ostream& out, const Point& p)
	{
		out << "[" << p.m_x << ", " << p.m_y << ", " << p.m_z << "]";
		return out;
	}


};