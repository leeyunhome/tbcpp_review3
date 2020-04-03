// 4_7_enumeratedtypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//int computeDamage(int weapon_id)
//{
//	if (weapon_id == 0)	// sword
//	{
//		return 1;
//	}
//
//	if (weapon_id == 1) // hammer
//	{
//		return 2;
//	}
//
//	// ...
//}

enum Color	// user-defined data types
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
	BLUE,
};

//enum Feeling
//{
//	HAPPY,
//	JOY,
//	TIRED,
//	BLUE,
//};

int main()
{
	using namespace std;

	int color_id = COLOR_RED;

	Color my_color = static_cast<Color>(3);
	//cout << color_id << endl;

	//cin >> my_color;

	/*int in_number;
	cin >> in_number;*/
	string str_input;
	std::getline(cin, str_input);

	if (str_input == "COLOR_BLACK")
		my_color = static_cast<Color>(0);

	/*if (COLOR_BLUE == COLOR_GREEN)
	{
		cout << "Equal" << endl;
	}*/

	/*Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	cout << paint << " " << house << " " << apple << endl;*/

	return 0;
}

