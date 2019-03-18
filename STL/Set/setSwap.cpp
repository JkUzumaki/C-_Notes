#include<iostream>
#include<set>

int main()
{
	int myints[] = {12, 75, 10, 32, 20, 25, 30, 35};
	std::set<int> first(myints, myints+3);
	std::set<int> second(myints+3, myints+8);
	std::set<int>::iterator it;	

	std::cout << "first set contains:\n";
	for(it = first.begin(); it != first.end(); it++)
		std::cout << ' '<< *it;
	std::cout << std::endl;
	
	std::cout << "second set contains:\n";
	for(it = second.begin(); it != second.end(); it++)
		std::cout << ' '<< *it;
	std::cout << std::endl;

	std::cout << "After swaping\n";
	first.swap(second);
	std::cout << "first set contains:\n";
	for(it = first.begin(); it != first.end(); it++)
		std::cout << ' '<< *it;
	std::cout << std::endl;
	
	std::cout << "second set contains:\n";
	for(it = second.begin(); it != second.end(); it++)
		std::cout << ' '<< *it;
	std::cout << std::endl;

	return 0;	
}
