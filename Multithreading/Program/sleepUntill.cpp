#include<iostream>
#include<thread>
#include<chrono>

void print_time_point(std::chrono::system_clock::time_point timePoint)
{
	std::time_t timeStamp = std::chrono::system_clock::to_time_t(timePoint);
	std::chrono::system_clock::to_time_t(timePoint);
	std::cout << std::ctime(&timeStamp) << std::endl;	
}

void threadFunc()
{
	std::cout << "Current Time :: ";
	print_time_point(std::chrono::system_clock::now());

	std::chrono::system_clock::time_point timePoint = std::chrono::system_clock::now() + std::chrono::seconds(10);

	std::cout << "Going to sleep until :: ";
	print_time_point(timePoint);

	std::this_thread::sleep_until(timePoint);
	std::cout << "Current time :: ";
	print_time_point(std::chrono::system_clock::now());
}

int main()
{
	std::thread th(&threadFunc);
	th.join();
	return 0;
}
