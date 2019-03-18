#include<iostream>
#include<vector>

int main()
{
	std::vector<int> v1 = {20, 40, 60};
	std::vector<int> vtr(v1.begin(), v1.end());
	
	
	for(int x: vtr)
		std::cout << x << " ";
	std::cout << std::endl;
	return 0;
}
