// 3.7 Binary numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

int main()
{
	std::cout << std::bitset<8>(77) << std::endl;
	std::cout << std::bitset<8>(93) << std::endl;
	std::cout << std::bitset<8>(-93) << std::endl;
	std::cout << std::bitset<8>(162) << std::endl;
	std::cout << std::bitset<8>(-94) << std::endl;

	return 0;
}
