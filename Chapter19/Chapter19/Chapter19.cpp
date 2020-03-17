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

		auto auto_crx1 = crx; //auto�� �߷��� �� �� const, reference �� �������ϴ�.

		const auto& auto_crx2 = crx;

		// ��Ƽ �������� ����Ͻ� �� ����Ͻ� �� �ֽ��ϴ�.
		volatile int vx = 1024;//���� ���� ���ϱ� ������ ����ȭ�� �� ���޶�� �ǹ�

		auto avx = vx;

		//���� �⺻���� �ڷ����� �ڵ����� �߷��� �س��� ������
		// ������ �͵� ���ľ�� �׷��ϱ� const, &, volitle�� ����ڰ� �ǵ��ϴ´�� �߰��� �� �ִ� ����
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
