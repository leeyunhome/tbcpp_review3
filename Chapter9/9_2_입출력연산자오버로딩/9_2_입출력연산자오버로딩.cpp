// 9_2_입출력연산자오버로딩.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//파일 출력이 stream으로된다.
#include <iostream>
#include <fstream>

using namespace std;

class Point
{
private:
    double m_x, m_y, m_z;

public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x(x), m_y(y), m_z(z)
    {}

    double getX() { return m_x; }
    double getY() { return m_y; }
    double getZ() { return m_z; }

    void print()
    {
        cout << m_x << " " << m_y << " " << m_z << endl;
    }

    friend ostream& operator << (ostream& out, const Point& point)
    {
        out << "[" << point.m_x << "," << point.m_y << "," << point.m_z << "]";
        return out; // 체이닝 하려고
    }

    friend istream& operator >> (istream& in, Point& point)
    {
        in >> point.m_x >> point.m_y >> point.m_z;
        return in;
    }
};
int main()
{
    ofstream of("out.txt");
    Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);
    
    cout << "input p1";
    cin >> p1;
    cin.ignore(32767, '\n');
    cout << "input p2";
    cin >> p2;
    cin.ignore(32767, '\n');
    cout << p1 << " " << p2 << endl;
    of << p1 << " " << p2 << endl;

    of.close();
    /*p1.print();
    cout << " ";
    p2.print();
    cout << endl;*/

    return 0;
}

