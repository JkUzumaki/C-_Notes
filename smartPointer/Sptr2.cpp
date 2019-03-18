//Use C++11 while compiling
#include<iostream>
#include<memory>

int main()
{
	std::shared_ptr<int> p1(new int());
	//std::shared_ptr<int> p2 = new int();
	std::shared_ptr<int> p2 = std::make_shared<int>();
	
	//Two memory is allocated on the heap
	//	For int
	//	Reference counter used for counting shared_ptr object
	p1.reset();
	std::cout << "The reference count for p1 shared ptr object : " << p1.use_count() << std::endl;
	std::cout << "The reference count for p2 shared ptr object : " << p2.use_count() << std::endl;
	return 0;
}
