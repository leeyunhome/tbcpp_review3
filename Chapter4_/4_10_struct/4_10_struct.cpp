// 4_10_struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Employee	// 2 + (2) + 4 + 8 = 14	// padding
{
	short	id;		// 2bytes
	int		age;	// 4 bytes
	double	wage;	// 8 bytes
};

//struct Person
//{
//	double height = 3.0;
//	float  weight = 200.0;
//	int       age = 100;
//	//string   name = "Mr. Incredible";
//
//	//void print()
//	//{
//	//	cout << height << " " << weight << " " <<
//	//		age << " " << name << endl;
//	//}
//};

//
//struct Family
//{
//	Person me, mom, dad;
//};

//Person getMe()
//{
//	Person me{ 2.0, 100.0, 20, "Jack Jack" };
//	
//	return me;
//}

int main()
{
	Employee emp1;

	cout << sizeof(Employee) << endl;

	////Person me2(getMe());
	//Person me{ 2.0, 100.0, 20, "Jack Jack" };
	////Person me;
	//cout << me.name << endl;
	////me2.print();

	///*me.print();

	//Person mom;
	//Person dad;*/

	///*me.age = 20;
	//me.name = "Jack Jack";
	//me.height = 2.0;
	//me.weight = 100.0;*/



	return 0;
}
