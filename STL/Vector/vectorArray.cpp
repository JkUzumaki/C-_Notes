#include<iostream>
#include<vector>

int main()
{
	std::vector<int> vtr = {10, 20, 30};
	
	
	for(int x: vtr)
		std::cout << x << " ";
	std::cout << std::endl;
	return 0;
}
