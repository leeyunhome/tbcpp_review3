// 4_4_auto_inference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

auto add(int x, int y) -> int;
auto add(double x, double y) -> double;

// template

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

	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);

	return 0;
}

