// 4_8_scopedenumerations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	using namespace std;

	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE,
	};

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	Color color1 = Color::RED;
	Color color2 = Color::RED;

	if (color1 == color2)
		cout << "Same color " << endl;
	////if (static_cast<int>(color) == static_cast<int>(fruit))
	//if (color == fruit)
	//	cout << "Color is fruit ? " << endl;

	return 0;
}
