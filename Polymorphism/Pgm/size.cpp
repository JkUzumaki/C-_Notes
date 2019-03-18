#include<iostream>

class Base
{
public:
	int var1;	// accounted 4 byte
	int var2;	// accounted 4 byte
	int var3;	// accounted 4 byte
	char var4;	// accounted 1 byte
	Base(){
		//std::cout << "In Base constructor\n";
	}
};
int main()
{
	Base B;
	std::cout << "Size of Base object " << sizeof(B) << std::endl;
	return 0;
}
