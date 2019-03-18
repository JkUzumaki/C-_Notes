#include<iostream>
#include<unordered_map>
#include<string>
int main()
{
	std::unordered_map<std::string, int> umap;
	umap["Geeksforgeeks"] = 10;
	umap["Practise"] = 20;
	umap["Contribute"] = 30;

	std::unordered_map<std::string, int>::iterator it;
	for(it = umap.begin(); it != umap.end(); it++){
		std::cout << it->first << "\t" << it->second << std::endl;
	}
	return 0;
}
