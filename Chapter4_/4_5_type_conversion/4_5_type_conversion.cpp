// 4_5_type_conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
int main()
{
	using namespace std;

	// 명시적 형변환
	int i = int(4.0);
	int j = (int)4.0;
	int k = static_cast<int>(4.0);


	// 암시적 형변환
	//cout << 5u - 10u;

	/*float f = 3.14;
	int i = f;*/

	/*int i = 1234;
	float f = i;*/

	/*double d = 0.123456789;
	float f = d;*/

	//cout << std::setprecision(12) << i << endl;
	// numeric conversion
	// 큰 것을 작은 걸로 보내거나 아니면 타입이 바뀌거나
	/*int i = 2;
	int c = i;*/

	//cout << static_cast<int>(c) << endl;

	/*double d = 3;
	short s = 2;*/

	//float a = 1.0f;
	//double d = a; // numeric promotion

	//cout << typeid(a).name() << endl;

	return 0;
}
