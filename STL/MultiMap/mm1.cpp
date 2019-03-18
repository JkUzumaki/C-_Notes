#include<iostream>
#include<map>
#include<iterator>
#include<string>

int main()
{
	std::multimap<std::string, int> m;

	m.insert(std::pair<std::string, int> ("a", 1) );
	m.insert(std::pair<std::string, int> ("c", 2) );
	m.insert(std::pair<std::string, int> ("b", 3) );
	m.insert(std::pair<std::string, int> ("b", 4) );
	m.insert(std::pair<std::string, int> ("a", 5) );
	m.insert(std::pair<std::string, int> ("b", 6) );

	std::cout << "Number of elements with key a: " << m.count("a") << std::endl;
	std::cout << "Number of elements with key b: " << m.count("b") << std::endl;
	std::cout << "Number of elements with key c: " << m.count("c") << std::endl;

	std::cout << "Elements in m: " << std::endl;
	for(std::multimap <std::string, int>::iterator it = m.begin(); it != m.end(); it++)
		std::cout << " [" << it->first << ", " << it->second << "] "<< std::endl;
	
	std::pair<std::multimap <std::string, int>::iterator, std::multimap<std::string, int>::iterator> ppp;

	ppp= m.equal_range("b");
	
	std::cout << std::endl << "Range of 'b' elements:" << std::endl;
	for(std::multimap<std::string, int>::iterator it2 = ppp.first; it2 != ppp.second; ++it2)
		std::cout << " [" << it2->first << ", " << it2->second << "]" << std::endl;

	m.clear();
}
