#include<iostream>
#include<thread>
#include<algorithm>
#include<chrono>
class WorkerThread
{
public:
	WorkerThread()
	{
	
	}
	void operator()(){
		std::cout << "Worker thread" << std::endl;
	}
};

int main()
{
	//WorkerThread obj;
	std::thread threadObj((WorkerThread()));
	threadObj.join();
	//threadObj.detach();//join();
	//std::this_thread::sleep_for(std::chrono::seconds(5)); 
	return 0;
}
