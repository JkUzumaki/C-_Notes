#include<iostream>
#include<map>

int main()
{
	std::map<char, int> myMap;

	//first insert function
	myMap.insert(std::pair<char, int>('a', 100));
	myMap.insert(std::pair<char, int>('z', 500));

	std::pair<std::map<char, int>::iterator, bool> ret;
	ret = myMap.insert(std::pair<char, int>('z', 300));
	if(ret.second == false){
		std::cout << "element 'a' already exist";
		std::cout << " with a value of " << ret.first->second << '\n';
	}
	
	//second insert functioin
	std::map<char, int>::iterator it = myMap.begin();
	myMap.insert(it, std::pair<char, int>('b', 300));
	myMap.insert(it, std::pair<char, int>('c', 400));

	//third inst function version
	std::map<char, int> anothermap;
	anothermap.insert(myMap.begin(), myMap.find('c'));
	
	//Printing the contents
	std::cout << "mymap contains:\n";
	for(it = myMap.begin(); it != myMap.end(); it++){
		std::cout << it->first << " => " << it->second << "\n";
	}
	std::cout << "anothermap contains:\n";
	for(it = anothermap.begin(); it != anothermap.end(); it++)
		std::cout << it->first << " => " << it->second << "\n";
	
	return 0;
}
