// 19_5_taskbased.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <future>

using namespace std;

int main()
{
	// multi-threading
	//{
	//	int result;
	//	std::thread t([&] {result = 1 + 2;  });
	//	t.join();
	//	cout << result << endl;
	//}

	////// task-based parallelism
	//{
	//	// std:future<int> fut = ...
	//	auto fut = std::async([] { return 1 + 2;  });
	//	cout << fut.get() << endl;
	//}

	//// future and promise // future를 사용할 때 thread랑 같이 사용하려면
	//{
	//	std::promise<int> prom;
	//	auto fut = prom.get_future();

	//	auto t = std::thread([](std::promise<int>&& prom)//프라미스의 r-value레퍼런스
	//	{
	//		prom.set_value(1 + 2);//프라미스가 set_value를 통해서 결과값을 받을 때까지
	//							 //
	//	}, std::move(prom));

	//	cout << fut.get() << endl; // 퓨쳐가 계속 기다립니다. 약속이 완수되기를 미래가 하염없이 기다리는 형태가 되는것
	//	t.join();
	//}

	{
		auto f1 = std::async([] {
			cout << "async1 start" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "async1 end" << endl;
		});

		auto f2 = std::async([] {
			cout << "async2 start" << endl;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "async2 end" << endl;
		});

		//f1.join();
		//f2.join();
		std::cout << "Main function" << endl;
	}

	return 0;
}

