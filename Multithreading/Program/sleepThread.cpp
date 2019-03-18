#include<iostream>
#include<thread>
#include<chrono>

void threadFunc()
{
	int i = 1;
	while(i <= 10){
		std::cout << std::this_thread::get_id() << " :: " << i++ << std::endl;
		std::this_thread::sleep_for(std::chrono::microseconds(2000000));
	}
}

int main()
{
	std::thread th(threadFunc);
	th.join();
	return 0;
}
