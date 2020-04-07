// 6_6_c_style_string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50,source);

	//cout << source << endl;
	//cout << dest << endl;

	//strcat()
	//strcmp()

	//strcat(dest, source);

	//cout << source << endl;
	//cout << dest << endl;

	//cout << strcmp(source, dest) << endl;

	if (strcmp(source, dest) == 0)
	{
		cout << "equal" << endl;
	}

	//char myString[255];

	////cin >> myString;
	//cin.getline(myString, 255);
	////cin.ignore(32767, '\n');

	////cout << myString << endl;

	//int ix = 0;
	//while (true)
	//{
	//	if (myString[ix] == '\0')
	//	{
	//		break;
	//	}
	//	cout << myString[ix] << " " << (int)myString[ix] << endl;
	//	ix++;
	//}
	return 0;
}

