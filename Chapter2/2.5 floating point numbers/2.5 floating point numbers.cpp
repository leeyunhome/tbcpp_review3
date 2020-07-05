// 2.5 floating point numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	cout << setprecision(7);
	cout << 3141592e-6 << endl;
	cout << 3141e-2 << endl;
	cout << 0001000e-6 << endl;
	//double zero = 0.0;
	//double posinf = 5.0 / zero;
	//double neginf = -5.0 / zero;
	//double nan = zero / zero;

	//cout << posinf << " " << std::isinf(posinf) << endl;
	//cout << neginf << " " << std::isinf(neginf) << endl;
	//cout << nan << " " << std::isnan(nan) << endl;
	//cout << 1.0 << " " << std::isnan(1.0) << endl;



	//double d1(1.0); // 10 significant digits
	//double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	//cout << setprecision(17);
	//cout << d1 << " " << d2 << endl;

	//cout << d << endl;
	//cout << std::setprecision(17);
	//cout << d << endl;

	//cout << 1.0 / 3.0 << endl;

	//float f(3.14e3); // 3.14 = 31.4 * 0.1

	//cout << f << endl;
	//cout << 3.14 << endl;
	//cout << 31.4e-1 << endl;
	//cout << 31.4e-2 << endl;
	//cout << 31.4e1 << endl;
	//cout << 31.4e2 << endl;

	//double d;
	//long double ld;

	//cout << numeric_limits<float>::lowest() << endl;
	//cout << numeric_limits<double>::lowest() << endl;
	//cout << numeric_limits<long double>::lowest() << endl;

	//cout << sizeof(f) << endl;
	//cout << sizeof(d) << endl;
	//cout << sizeof(ld) << endl;

	return 0;
}
