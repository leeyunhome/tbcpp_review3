// 181 istream으로 입력받기.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip> // input/output manipulators

using namespace std;

int main()
{
	char buf[1024];

	//cout << (char)cin.peek() << endl;
	//cin.ignore(2);

	cin >> buf;
	cout << buf << endl;

	//cin.unget();
	cin.putback('A');

	cin >> buf;
	cout << buf << endl;

	/*int i;
	float f;

	cin >> i >> f;

	cout << i << " " << f << endl;*/

	//char ch;
	//char buf[100];
	/*string buf;

	getline(cin, buf);
	cout << cin.gcount() << " " << buf << endl;*/

	/*cin.getline(buf, 100);
	cout << cin.gcount() << " " << buf << endl;
	
	cin.getline(buf, 100);
	cout << cin.gcount() << " " << buf << endl;*/

	//while (cin >> ch)
	

	/*char buf[5];

	cin >> setw(5) >> buf;
	cout << buf << endl;

	cin >> setw(5) >> buf;
	cout << buf << endl;
	
	cin >> setw(5) >> buf;
	cout << buf << endl;*/

	//cout << "Enter a number" << endl;

	//int i;
	//cin >> i;

	//cout << i << endl;

	return 0;
}

