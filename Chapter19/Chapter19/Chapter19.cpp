// Chapter19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>	// std::min
#include <typeinfo>

// Reference: http://thbecker.net/articles/auto_and_decltype/section_01.html

using namespace std;

class Examples
{
public:
	
	void ex1()
	{
		std::vector<int> vect;
		for (std::vector<int>::iterator itr = vect.begin(); itr != vect.end(); ++itr)
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

	void ex6()
	{
		int x = 42;
		const int* p1 = &x;
		auto p2 = p1;
		//*p2 = 43;	// error
	}

	template<typename T, typename S>
	void func_ex7(T lhs, S rhs)
	{
		auto prod1 = lhs * rhs;

		//typedef typeof(lhs* rhs) product_type;	// pre-c++11 'some' compiler
		typedef decltype(lhs* rhs) product_type;

		product_type prod2 = lhs * rhs;

		decltype(lhs * rhs) prod3 = lhs * rhs;

		cout << typeid(prod3).name() << endl;
	}

	template<typename T, typename S>
	//decltype(lhs * rhs) func_ex8(T lhs, S rhs)
	auto func_ex8(T lhs, S rhs) -> decltype(lhs* rhs)
	{
		return lhs * rhs;
	}

	void ex7_8()
	{
		func_ex7(1.0, 345);
		auto b = func_ex8(1.2, 345);

	}

	struct S
	{
		int m_x;

		S()
		{
			m_x = 42;
		}
	};

	void ex9()
	{
		int x;
		const int cx = 42;
		const int& crx = x;
		const S* p = new S();

		auto a = x;
		auto b = cx;
		auto c = crx;
		auto d = p;//p같은 경우는 포인터기 때문에 포인터가 그대로 따라오겠죠?
		auto e = p->m_x;

		typedef decltype(x)		 x_type;// 변수가 선언이 된 타입을 그대로 가져옵니다.
		typedef decltype(cx)	 cx_type;
		typedef decltype(crx)	 crx_type;
		typedef decltype(p->m_x) m_x_type;	// 'declared' type
	
		typedef decltype((x))	x_with_parens_type;	// add references to lvalues
		typedef decltype((cx))	cx_with_parens_type;
		typedef decltype((crx)) crx_with_parens_type;
		typedef decltype((p->m_x)) m_w_with_parens_type;
	}

	const S foo()
	{
		return S();
	}

	const int& foobar()
	{
		return 123;
	}

	void ex10()
	{
		std::vector<int> vect = { 42, 43 };

		auto a = foo();
		typedef decltype(foo()) foo_type;

		auto b = foobar();
		typedef decltype(foobar()) foobar_type;


		auto itr = vect.begin();
		typedef decltype(vect.begin()) iterator_type;

		auto first_element = vect[0];
		decltype(vect[1]) second_element = vect[1];
	}

	void ex11()
	{
		int x = 0;
		int y = 0;
		const int cx = 42;
		const int cy = 43;
		double d1 = 3.14;
		double d2 = 2.72;

		typedef decltype(x* y) prod_xy_type;
		auto a = x * y;

		typedef decltype(cx* cy) prod_cxcy_type; // result is prvalue
		auto b = cx * cy;

		typedef decltype(d1 < d2 ? d1 : d2) cond_type;// result is lvalue. & is added.
		auto c = d1 < d2 ? d1 : d2;

		typedef decltype(x < d2 ? x : d2) cond_type_mixed; // promotion of x to double
		auto d = x < d2 ? x : d2;

		// auto d = std::min(x, db1);	// error
	}

	template<typename T, typename S>
	auto fpmin_wrong(T x, S y) -> decltype(x < y ? x : y)
	{
		return x < y ? x : y;
	}

	template<typename T, typename S>
	auto fpmin(T x, S y) ->
		typename std::remove_reference<decltype(x < y ? x : y)>::type
	{
		return x < y ? x : y;
	}

	void ex12()
	{
		int i = 42;
		double d = 45.1;
		//auto a = std::min(i, d); // error : 'std::min': no matching overloaded function found
		auto a = std::min(static_cast<double>(i), d);

		int& j = i;

		typedef decltype(fpmin_wrong(d, d)) fpmin_return_type1;
		typedef decltype(fpmin_wrong(i, d)) fpmin_return_type2;
		typedef decltype(fpmin_wrong(j, d)) fpmin_return_type2;
	}

	void ex13()
	{
		std::vector<int> vect; // vect is empty
		typedef decltype(vect[0]) integer;
	}

	template<typename R>
	class SomeFunctor
	{
	public:
		typedef R result_type;

		SomeFunctor()
		{}

		result_type operator() ()
		{
			return R();
		}
	};

	void ex14()
	{
		SomeFunctor<int> func;
		typedef decltype(func)::result_type integer; // nested type
	}

	void ex15()
	{
		auto lambda = []() {return 42; };
		decltype(lambda) lambda2(lambda);
		decltype((lambda)) lambda3(lambda);

		cout << "Lambda functions" << endl;
		cout << &lambda << " " << &lambda2 << endl;
		cout << &lambda << " " << &lambda3 << endl;
	}

	void ex16()
	{
		// generic lambda
		auto lambda = [](auto x, auto y)
		{
			return x + y;
		};

		cout << lambda(1.1, 2) << " " << lambda(3, 4) << " " << lambda(4.5, 2.2) << endl;
	}


};
int main()
{
	Examples e;
	e.ex7_8();
	e.ex15();
	e.ex16();

	return 0;
}
