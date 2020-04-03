// 4_6_stdstring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <limits>

using namespace std;

int inputInt()
{
	int age;
	cin >> age;
	std::cin.ignore(32767, '\n');
	return age;
}

int main()
{
	//string a("Hello, World");
	////string b("World");
	////string hw = a + b;	// append

	////hw += "I'm good";

	//cout << a.length() << endl;

	cout << "Your age ? : ";
	int age;
	age = inputInt();
	//cin >> age;
	//std::getline(std::cin, age);
	//std::cin.ignore(32767, '\n');
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	cout << "Your name ? : ";
	string name;

	std::getline(std::cin, name);
	//cin >> name;
	//cin.ignore(32767, '\n');
	

	cout << name << " " << age << endl;

	/*const char my_strs[] = "Hello, World";
	const string my_hello{ "Hello, World" };

	string my_ID = "123";

	cout << my_hello << endl;*/

	return 0;
}
