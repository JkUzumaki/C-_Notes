#include<iostream>
#include<thread>

class ThreadRAII
{
	std::thread &m_thread;
public:
	ThreadRAII(std::thread &threadObj): m_thread(threadObj){}
	~ThreadRAII()
	{
		if(m_thread.joinable())
			m_thread.join();
	}
};

void thread_function()
{
	for(int i = 0; i < 10; i++)
		std::cout << "Thread_function executing" << std::endl;
}

int main()
{
	std::thread threadObj(thread_function);
	ThreadRAII wrapperObj(threadObj);
	return 0;
}
