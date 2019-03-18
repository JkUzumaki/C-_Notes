#include<iostream>
#include<thread>

void WorkerThread()
{
	std::cout << "Inside the worker thread function\n";
}

int main()
{
	std::thread threadObj((WorkerThread));
	if(threadObj.joinable()){
		std::cout << "Detaching thread" << std::endl;
		threadObj.detach();
	}
	if(threadObj.joinable()){
		std::cout << "Detaching thread\n";
		threadObj.detach();
	}
	std::thread threadObj2(WorkerThread);
	if(threadObj2.joinable()){
		std::cout << "Joining thread\n" ;//<< std::endl;
		threadObj2.join();
	}
	if(threadObj2.joinable()){
		std::cout << "Joining thread\n" << std::endl;
		threadObj2.join();
	}
	return 0;
}
