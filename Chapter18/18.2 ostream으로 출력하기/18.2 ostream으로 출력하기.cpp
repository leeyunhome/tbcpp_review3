// 18.2 ostream으로 출력하기.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << -12345 << endl;
	cout.fill('*');
	cout << std::setw(10) << -12345 << endl;
	cout << std::setw(10) << std::left << -12345 << endl;
	cout << std::setw(10) << std::right << -12345 << endl;
	cout << std::setw(10) << std::internal << -12345 << endl;

	/*cout << std::boolalpha;
	cout << true << " " << false << endl;*/

	//cout << std::defaultfloat;
	//cout << std::fixed;
	//cout << std::scientific << std::uppercase;
	/*cout << std::showpoint;
	cout << std::setprecision(3) << 123.456 << endl;
	cout << std::setprecision(4) << 123.456 << endl;
	cout << std::setprecision(5) << 123.456 << endl;
	cout << std::setprecision(6) << 123.456 << endl;
	cout << std::setprecision(7) << 123.456 << endl;*/

	//cout.setf(std::ios::showpos);
	//cout.unsetf(std::ios::dec);
	//cout.setf(std::ios::hex, std::ios::basefield);
	//cout.setf(std::ios::uppercase);

	/*cout << std::hex << std::uppercase;
	cout << 108 << endl;
	cout << 109 << endl;

	cout << std::dec;
	cout << 110 << endl;*/


	//cout.unsetf(std::ios::showpos);
	//cout << 109 << endl;

	return 0;
}
