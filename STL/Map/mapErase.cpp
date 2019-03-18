#include<iostream>
#include<map>

int main()
{
	std::map<char, int> myMap;
	std::map<char, int>::iterator it;

	//insert some values:
	myMap['a'] = 10;
	myMap['b'] = 20;
	myMap['c'] = 30;
	myMap['d'] = 40;
	myMap['e'] = 50;
	myMap['f'] = 60;

	it = myMap.find('b');
	myMap.erase(it);
	myMap.erase('c');
	it = myMap.find('e');
	myMap.erase(it, myMap.end());
	
	//Show content
	for(it = myMap.begin(); it != myMap.end(); it++)
		std::cout << it->first << " => " << it->second << std::endl;

	return 0;
}
