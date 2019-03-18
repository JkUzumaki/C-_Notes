#include <iostream> 
#include <iterator> 
#include <map> 

int main() 
{ 

	// empty map container 
	std::map<int, int> map1; 

	// insert elements in random order 
	map1.insert(std::pair<int, int>(4, 40)); 
	map1.insert(std::pair<int, int>(3, 30)); 
	map1.insert(std::pair<int, int>(7, 70)); 
	map1.insert(std::pair<int, int>(2, 20)); 
	map1.insert(std::pair<int, int>(6, 60)); 
	map1.insert(std::pair<int, int>(5, 50)); 
	map1.insert(std::pair<int, int>(1, 10)); 

	// printing map map1 
	std::map<int, int>::iterator itr; 
	std::cout << "\nThe map map1 is : \n"; 
	std::cout << "\tKEY\tELEMENT\n"; 
	for (itr = map1.begin(); itr != map1.end(); ++itr) { 
		std::cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	std::cout << std::endl; 

	// assigning the elements from map1 to map2 
	std::map<int, int> map2(map1.begin(), map1.end()); 

	// print all elements of the map map2 
	std::cout << "\nThe map map2 after"
		<< " assign from map1 is : \n"; 
	std::cout << "\tKEY\tELEMENT\n"; 
	for (itr = map2.begin(); itr != map2.end(); ++itr) { 
		std::cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	std::cout << std::endl; 

	// remove all elements up to 
	// element with key=3 in map2 
	std::cout << "\nmap2 after removal of"
			" elements less than key=3 : \n"; 
	std::cout << "\tKEY\tELEMENT\n"; 
	// erase(0, n) will earse elements from index 0 to n-1
	map2.erase(map2.begin(), map2.find(3)); 
	for (itr = map2.begin(); itr != map2.end(); ++itr) { 
		std::cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	// To erase element based on key
	// remove all elements with key = 4 
	int num; 
	num = map2.erase(4); 
	std::cout << "\nmap2.erase(4) : "; 
	std::cout << num << " removed \n"; 
	std::cout << "\tKEY\tELEMENT\n"; 
	for (itr = map2.begin(); itr != map2.end(); ++itr) { 
		std::cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 

	std::cout << std::endl; 

	// lower bound and upper bound for map map1 key = 5 
	std::cout << "map1.lower_bound(5) : "
		<< "\tKEY = "; 
	std::cout << map1.lower_bound(5)->first << '\t'; 
	std::cout << "\tELEMENT = "
		<< map1.lower_bound(5)->second << std::endl; 
	std::cout << "map1.upper_bound(5) : "
		<< "\tKEY = "; 
	std::cout << map1.upper_bound(5)->first << '\t'; 
	std::cout << "\tELEMENT = "
		<< map1.upper_bound(5)->second << std::endl; 

	return 0; 
} 

