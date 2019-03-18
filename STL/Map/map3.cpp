#include<iostream>
#include<string>
#include<map>

int main()
{
	//Create a map
	std::map<std::string, int> myMap = {
		{"alpha", 0},
		{"beta", 0},
		{"gama", 0}
	};
	//Accessig map based on key and setting value
	myMap.at("alpha") = 10;
	myMap.at("beta") = 20;
	myMap.at("gama") = 30;

	//Printing the value
	for(auto&x: myMap){
		std::cout << x.first << ": " << x.second << '\n';
	}	
	return 0;
}
