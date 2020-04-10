// 7_11_std_vector를 스택처럼 사용하기.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int> &stack)
{
	for (auto& element : stack)
		cout << element << " ";
	cout << endl;
}
int main()
{
	// int *v_ptr = new int[3]{1, 2, 3};
	std::vector<int> stack;

	stack.push_back(3);
	printStack(stack);
	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);


	//stack.reserve(1024);

	//v.resize(2);

	// size, capacity
	// new, delete이 어떻게 하면 적게 호출될 것인가를
	// 생각하면서 쓰는 것이 좋다.

	

	/*cout << v.size() << " " << v.capacity() << endl;

	int* ptr = v.data();
	cout << ptr[2] << endl;*/

	return 0;
}
