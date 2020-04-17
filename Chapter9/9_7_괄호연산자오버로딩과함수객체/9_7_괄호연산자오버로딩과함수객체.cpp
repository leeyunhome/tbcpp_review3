// 9_7_괄호연산자오버로딩과함수객체.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Accumulator
{
private:
    int m_counter = 0;

public:
    int operator()(int i) { return (m_counter += i); }
};

int main()
{
    Accumulator acc;
    //cout << acc(10) << endl; // 이런 형태로 사용을 하는 것을 functor라고 부른다.
    //cout << acc(20) << endl;
    cout << acc(acc(acc(10))) << endl;
    return 0;
}
