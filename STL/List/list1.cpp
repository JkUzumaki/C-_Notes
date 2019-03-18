#include<iostream>
#include<list>
#include<iterator>

void showlist(std::list<int> g)
{
	std::list<int> :: iterator it;
	for(it = g.begin(); it != g.end(); ++it)
		std::cout << '\t' << *it;
	std::cout << "\n";
}

int main()
{
	std::list<int> list1, list2;
	for(int i = 0; i < 10; ++i){
		list1.push_back(i *2);
		list2.push_back(i *3);
	}
	std::cout << "\nList 1 is: ";
	showlist(list1);
	
	std::cout << "\nList 2 is: ";
	showlist(list2);

	std::cout << "\nList1 front: " << list1.front();
	std::cout << "\nList1 back: " << list1.back();

	std::cout << "\nList1.pop_front(): ";
	list1.pop_front();
	showlist(list1);

	std::cout << "\nList2.pop_back()";
	list2.pop_back();
	showlist(list2);
	
	std::cout << "\nList1.reverse()";
	list1.reverse();
	showlist(list1);

	std::cout << "\nList2.sort()";
	list2.sort();
	showlist(list2);
		
	return 0;
}
