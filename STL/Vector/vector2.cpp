#include<iostream>
#include<vector>

int main()
{
	int n = 3;
	std::vector<int> vtr(n, 11);
	
	
	for(int x: vtr)
		std::cout << x << " ";
	std::cout << std::endl;
	return 0;
}
