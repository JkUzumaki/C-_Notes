#include<iostream>

class Base
{
public:
	int var1;
	int var2;
	long var3;
	long var4;
	Base(){
		std::cout << "In Base constructor\n";
	}
};

class Derived: public  Base
{
public:
	int var1;
	int var2;
	long var3;
	long var4;
	Derived(){
		std::cout << "In Derived constructor\n";
	}
};

int main()
{
	Base B;
	std::cout << "Size of Base object " << sizeof(B) << std::endl;
	Derived D;
	std::cout << "Size of Base object " << sizeof(D) << std::endl;
	return 0;
}
