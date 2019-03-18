#include<iostream>
#include<thread>
#include<mutex>
#include<vector>
#include<random>
using namespace std;

// Global
std::mutex values_mtx;
std::mutex cout_mtx;
std::vector<int> values;

/*
int randGen(const int& min, const int& max)
{
	std::static thread_local mt19937 generator(hash<thread::id>()(this_thread::getid()) );
	uniform_int_distribution<int> distribution(min, max);
	return distribution(generator);
}
*/
int randGen(const int& min, const int& max) {
    static thread_local mt19937 generator(hash<thread::id>()(this_thread::get_id()));
    uniform_int_distribution<int> distribution(min, max);
    return distribution(generator);
}
void threadFn(int tid)
{
	cout_mtx.lock();
	std::cout << "Starting thread " << tid << " \n";
	cout_mtx.unlock();
	
	values_mtx.lock();
	int val = values[0];
	values_mtx.unlock();
	
	int rval = randGen(0, 10);
	val += rval;
	
	cout_mtx.lock();
	std::cout << "Thread " << tid << " adding " << rval << " New value: " << val << " \n";
	cout_mtx.unlock();

	values_mtx.lock();
	values.push_back(val);
	values_mtx.unlock();
}

int main()
{
	values.push_back(32);
	
	std::thread t1(threadFn, 1);
	std::thread t2(threadFn, 2);
	std::thread t3(threadFn, 3);
	std::thread t4(threadFn, 4);
	
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	
	std::cout << "Input : " << values[0] << std::endl;
	for(int i = 1 ; i < 5; i++){
		std::cout << "Result " << i << " " << values[i] << std::endl; 
	}
	
	/* std::cout << "Input : " << values[0] << " , Result 1: " << values[1] <<
		" Result 2: " << values[2] << " Result 3: " << values[3] << " Result 4: " << values[4] << '\n';
	 */	
	return 1;
}
