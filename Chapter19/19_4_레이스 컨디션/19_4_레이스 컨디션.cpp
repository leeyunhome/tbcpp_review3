// 19_4_레이스 컨디션.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>

using namespace std;

mutex mtx;

int main()
{
	//atomic<int> shared_memory(0);
	int shared_memory(0);

	auto count_func = [&]() {
		for (int i = 0; i < 1000; ++i)
		{
			//this_thread::sleep_for(chrono::microseconds(1));
			// 밀리세컨드만 쉬게 하더라도 이 두개의 쓰레드가 동시에 작업을 하는 시간이 생기기 때문에
			// 문제가 발생하게 된것

			//mtx.lock();
			//shared_memory.fetch_add(1);

			//std::lock_guard lock(mtx);
			//std::scoped_lock lock(mtx); // 권장

			shared_memory++;
			//mtx.unlock();
		}
	};

	thread t1 = thread(count_func);
	thread t2 = thread(count_func);

	t1.join();
	t2.join();

	cout << "After" << endl;
	cout << shared_memory << endl;

	return 0;
}

