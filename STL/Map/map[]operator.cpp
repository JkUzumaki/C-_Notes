#include<iostream>
#include<map>
#include<string>

int main()
{
	//Creating a map container with char as key and string as its value
	std::map<char, std::string> myMap;
	//map[key] = value;
	myMap['a'] = "A element";
	myMap['b'] = "Another element B";
	myMap['c'] = myMap['b'];
	//map[key] will print the value
	std::cout << "map key 'a' has " << myMap['a'] << std::endl;
	std::cout << "map key 'b' has " << myMap['b'] << std::endl;
	std::cout << "map key 'c' has " << myMap['c'] << std::endl;
	//when a map key is not present it does not print anything
	std::cout << "map key 'd' has " << myMap['d'] << std::endl;
	//map.size() will print the total size
	std::cout << "myMap now contains " << myMap.size() << " elemetns\n";
	return 0;
}
