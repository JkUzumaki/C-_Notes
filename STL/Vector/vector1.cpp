#include<iostream>
#include<vector>

int main()
{
	std::vector<int> vtr;
	vtr.push_back(10);
	vtr.push_back(20);
	vtr.push_back(30);
	
	for(int x: vtr)
		std::cout << x << " ";
	std::cout << std::endl;
	return 0;
}
