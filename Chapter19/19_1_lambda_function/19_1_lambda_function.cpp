// 19_1_lambda_function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>

using namespace std;

void goodnight(const string& s)
{
	cout << "Goodnight " << s << endl;
}

class Object
{
public:
	void hello(const string& s)
	{
		cout << "Hello " << s << endl;
	}
};

int main()
{
	auto func = [](const int& i) -> void { cout << i << " Hello, World!" << endl; };

	func(123);

	[](const int& i) -> void { cout << i << " Hello, World!" << endl; }(5);
	
	{
		string name = "JackJack";
		[&]() {std::cout << name << endl; }();
	}

	vector<int> v;
	v.push_back(1);
	v.push_back(2);

	auto func2 = [](int val) {cout << val << endl; };
	for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });

	cout << []() -> int { return 1; }() << endl;

	std::function<void(int)> func3 = func2;
	func3(123);

	std::function<void(void)>func4 = std::bind(func3, 456);
	func4();

	// https://en.cppreference.com/w/cpp/utility/functional/placeholders
	{
		Object instance;
		auto f = std::bind(&Object::hello, &instance, std::placeholders::_1);
		
		f(string("World"));

		auto f2 = std::bind(goodnight, std::placeholders::_1);
		
		f2(string("World"));
	}

	return 0;
}

