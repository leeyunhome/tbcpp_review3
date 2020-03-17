// Chapter19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>	// std::min

// Reference: http://thbecker.net/articles/auto_and_decltype/section_01.html

using namespace std;

class Examples
{
public:
	
	void ex1()
	{
		std::vector<int> vect;
		for (std::vector<int>::iterator itr = vect.begin(); itr != vector.end(); ++itr)
			cout << *itr;

		for (auto itr = vect.begin(); itr != vect.end(); itr++)
			cout << *itr;

		for (auto itr : vect) // for (const auto & itr : vect)
			cout << itr;
	}

	void ex2()
	{
		int x = int();

		auto auto_x = x;

		const int& crx = x;

		auto auto_crx1 = crx; //auto는 추론을 할 때 const, reference 다 떼버립니다.

		const auto& auto_crx2 = crx;

		// 멀티 스레딩을 사용하실 때 사용하실 수 있습니다.
		volatile int vx = 1024;//값이 자주 변하기 때문에 최적화할 때 빼달라는 의미

		auto avx = vx;

		//가장 기본적인 자료형만 자동으로 추론을 해내고 나머지
		// 자잘한 것들 수식어들 그러니까 const, &, volitle은 사용자가 의도하는대로 추가할 수 있는 구조
		volatile auto vavx = vx; 

	}

	/*template<class T>
	void func_ex3(T arg)
	{}*/

	template<class T>
	void func_ex3(const T& arg)
	{}
	

	void ex3()
	{
		const int& crx = 123;

		func_ex3(crx);
	}

	void ex4()
	{
		const int c = 0;
		auto& rc = c;

		//rc = 123; // error
	}

	void ex5() // amendment
	{
		int i = 42;
		auto&& ri_1 = i;		//l-value
		auto&& ri_2 = 42;		// r-value
	}


};
int main()
{

	return 0;
}
