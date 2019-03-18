#include<iostream>
#include<thread>

void fun()
{
	std::cout << "The thread id : " << std::this_thread::get_id() << std::endl;
}

int main()
{
	std::thread t1(fun);
	std::cout << "Thread 1 id: " << t1.get_id() << std::endl;	
	return 0;
}
