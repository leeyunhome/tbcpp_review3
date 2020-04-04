// 4_9_Typealiases.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	using namespace std;

	//typedef vector<pair<string, int> > pairlist_t;
	using pairlist_t = vector<pair<string, int> >;

	pairlist_t pairlist1;
	pairlist_t pairlist2;

	//typedef float distance_t;
	//
	//double     my_distance;
	//distance_t home2work;
	//distance_t home2school;

	return 0;
}

