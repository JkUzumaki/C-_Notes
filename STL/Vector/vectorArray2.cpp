#include<iostream>
#include<vector>

int main()
{
	int arr[] = {100, 200, 300};
	int size = sizeof(arr) / sizeof(arr[0]);

	std::vector<int> vtr(arr, arr + size);
		
	for(int x: vtr)
		std::cout << x << " ";
	std::cout << std::endl;
	return 0;
}
