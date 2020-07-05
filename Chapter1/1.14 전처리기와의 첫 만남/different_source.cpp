#include <iostream>
#include <algorithm>
using namespace std;

void doSomething()
{

#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange " << endl;
#endif
}