#include<iostream>
#include<set>

int main()
{
	std::set<int> mySet;
	std::set<int>::iterator it;
	std::pair<std::set<int>::iterator, bool> ret;

	//set initial values:
	for(int i = 1; i <= 5; ++i)
		mySet.insert(i*10);

	ret = mySet.insert(20);

	if(ret.second == false)
		it = ret.first;

	mySet.insert(it, 25);
	mySet.insert(it, 24);
	mySet.insert(it, 26);

	int myints[] = {5, 10, 15};
	mySet.insert (myints, myints+3);

	std::cout << "myset contains: ";
	for(it = mySet.begin(); it != mySet.end(); it++)
		std::cout << ' ' << *it;
	std::cout << '\n';

	return 0;
}
