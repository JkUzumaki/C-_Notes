#include<iostream>
#include<thread>

void WorkerThread()
{
	std::cout << "Inside the worker thread function\n";
}

int main()
{
	std::thread threadObj((WorkerThread));
	std::cout << "Thread joined once\n";
	threadObj.detach();
	std::cout << "Thread detach\n";
	threadObj.join();
	return 0;
}
