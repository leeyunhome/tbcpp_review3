// 9_6_첨자연산자오버로딩하기.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
private:
	int m_list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

public:
	void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}

	int* getList()
	{
		return m_list;
	}

	int& operator [](const int& i)
	{
		assert(i >= 0);
		assert(i < 10);
		return m_list[i];
	}
	const int& operator [](const int& i) const
	{
		assert(i >= 0);
		assert(i < 10);
		return m_list[i];
	}
};
int main()
{
	IntList* list = new IntList;

	//list[3] = 10; // Not Ok 의도가 다르다
	(*list)[3] = 10; // ok
	//const IntList my_list;
	////my_list.setItem(3, 1);

	////cout << my_list.getItem(3) << endl;

	////my_list.getList()[3] = 2;

	////cout << my_list.getList()[3] << endl;

	////my_list[3] = 10; // 값을 바꿔줄 수도 있고(항상 lvalue여야 하니까)
	//cout << my_list[3] << endl;

	return 0;
}

