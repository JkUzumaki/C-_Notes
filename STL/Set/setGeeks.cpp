#include<iostream>
#include<set>
#include<iterator>

int main()
{
	//empy set container
	std::set<int, std::greater<int> > cnt1;
	//Insert element to container in random order
	cnt1.insert(40);
	cnt1.insert(30);
	cnt1.insert(60);
	cnt1.insert(20);
	cnt1.insert(50);
	cnt1.insert(50);
	cnt1.insert(10);

	//Print container 1
	std::set<int, std::greater <int> >:: iterator itr;
	std::cout << "\nThe set container 1: ";
	for(itr = cnt1.begin(); itr != cnt1.end(); itr++)
		std::cout << "\t" << *itr;
	std::cout << std::endl;

	//assign the elements from cnt1 to cnt2
	std::set<int> cnt2( cnt1.begin(), cnt1.end());
	
	//Print container 2
	std::cout << "\nThe se container 2: ";
	for(itr = cnt2.begin(); itr != cnt2.end(); itr++)
		std::cout << "\t" << *itr;
	std::cout << std::endl;

	//Remove all the elements up to 30 in cnt2
	std::cout << "\nContainer 2 after removal of elements less than 30 : ";
	cnt2.erase( cnt2.begin(), cnt2.find(30));
	for(itr = cnt2.begin(); itr != cnt2.end(); ++itr)
		std::cout << "\t" << *itr;

	//Remove element with value 50 in cnt2
	int num;
	num = cnt2.erase(50);
	std::cout << "\ncnt2.erase(50) : ";
	std::cout << num << " remove \t";
	for(itr = cnt2.begin(); itr != cnt2.end(); ++itr)
		std::cout << '\t' << *itr;
	std::cout << std::endl;

	//lower bound and upper bound for set cnt1
	std::cout << "cnt1.lower_bound(40): " << *cnt1.lower_bound(40) << std::endl;
	std::cout << "cnt1.upper_bound(40): " << *cnt1.upper_bound(40) << std::endl;
	//lower bound and upper bound for set cnt2
	std::cout << "cnt2.lower_bound(40): " << *cnt2.lower_bound(40) << std::endl;
	std::cout << "cnt2.upper_bound(40): " << *cnt2.upper_bound(40) << std::endl;
	
	return 0;	
}
