#include<iostream>

class Base
{
public:
	int var1;	// accounted 4 byte
	int var2;	// accounted 4 byte
	int var3;	// accounted 4 byte
	long var4;	// accounted 8 byte total 20 byte but 24 will be allocated when we calculate which include padding
	Base(){
		std::cout << "In Base constructor\n";
	}
	virtual void funcion(){
		int local;// Not accounted
		std::cout << "Function in Base";	
	}
	virtual void funcion1(){
		int local;// Not accounted
		std::cout << "Function1 in Base";	
	}
	virtual void funcion2(){
		int local;// Not accounted
		std::cout << "Function2 in Base";	
	}
	virtual void funcion3(){
		int local;// Not accounted
		std::cout << "Function3 in Base";	
	}
	virtual void funcion4(){
		int local;// Not accounted
		std::cout << "Function4 in Base";	
	}
	virtual void funcion5(){
		int local;// Not accounted
		std::cout << "Function5 in Base";	
	}
	virtual void funcion6(){
		int local;// Not accounted
		std::cout << "Function6 in Base";	
	}
	virtual void funcion7(){
		int local;// Not accounted
		std::cout << "Function7 in Base";	
	}

	virtual void funcion8(){
		int local;// Not accounted
		std::cout << "Function8 in Base";	
	}
};
/*
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
*/
int main()
{
	Base B, B1;
	std::cout << "Size of Base object " << sizeof(B1) << std::endl;
	//Derived D;
	//std::cout << "Size of Base object " << sizeof(D) << std::endl;
	return 0;
}
