#include<iostream>

class Base
{
public:
	Base()
	{	
		std::cout << "Inside the Base const\n";
	}
	~Base()
		{std::cout << "Inside Base destructor\n";}
};

class Derived: public Base
{
public:
	Derived()
	{
		std::cout << "Inside derived const\n";
	}
	~Derived()
		{std::cout << "Inside derived dest\n";}
};

class Derived2: public Derived
{
public:
	Derived2()
	{
		std::cout << "Inside derived derive const\n";
	}
	~Derived2()
	{
		std::cout << "Inside derived derived dest\n";
	}
};
int main()
{
//	Base b;
	//std::delete b;
	Derived2 d;
	//std::delete d;
	return 0;
}
