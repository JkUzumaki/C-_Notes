#include<iostream>
#include<thread>
#include<mutex>
#include<vector>
#include<random>

//Global
std::mutex values_mtx;	 // for global vector
std::mutex cout_mtx;	 // for cout since its not thread safe
std::vector<int> values; 

void threadFnc(int id);

int main()
{
	values.push_back(42);
	std::thread tr1(threadFnc, 1);
	std::thread tr2(threadFnc, 2);
	std::thread tr3(threadFnc, 3);
	std::thread tr4(threadFnc, 4);
	
	tr1.join();
	tr2.join();
	tr3.join();
	tr4.join();

	std::cout << "Input " << values[0] << ", Result 1: ";
	std::cout << values[1] << ", Result 2: ";
	std::cout << values[2] << ", Result 3: ";
	std::cout << values[3] << ", Result 4: ";
	std::cout << values[4] << "\n";
	return 1;
}

void hreadFnc(int tid)
{
	cout_mtx.lock();
	std::cout << "Starting thread " << tid << ".n";
	cout_mtx.unlock(); 

}
