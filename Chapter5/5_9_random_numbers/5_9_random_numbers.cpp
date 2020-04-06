// 5_9_random_numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>	// std::rand(), std::srand()
#include <ctime>	// std::time()
#include <random>

using namespace std;

unsigned int PRNG()	//Pseudo Random Number Generator
{
	static unsigned int seed = 5523;	// seed number

	seed = 8253729 * seed + 2396403;

	return seed % 32768;
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);
	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}
int main()
{
	std::random_device rd;
	std::mt19937 mersenne(rd());	// create a mersenn twister,
	std::uniform_int_distribution<> dice(1, 6);

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;

	//std::srand(5323);	// seed
	////std::srand(static_cast<unsigned int>(std::time(0)));

	//for (int count = 1; count <= 100; ++count)
	//{
	//	cout << rand() % 4 + 5 << "\t";

	//	if (count % 5 == 0) cout << endl;
	//}
	return 0;
}

