// Chapter18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


auto add(int x, int y) -> int
{
	return x + y;
}

auto add(double x, double y) -> double
{
	return x + y;
}

int main()
{
	using namespace std;

	auto a = 123;//�ʱ�ȭ�� ���� ������ auto�� ����� �� ����
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);
	auto result = add(1.0, 2.0);

	return 0;
}
