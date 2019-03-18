#include<iostream>

class B;

class A
{
private:
	int numA;
public:
	A():numA(10){}
	friend int add(A, B);
};

class B
{
private:
	int numB;
public:
	B(): numB(11){}
	friend int add(A, B);
};

int add(A objA, B objB)
{
	return (objA.numA + objB.numB);
}

int main()
{
	A Oa;
	B Ob;
	std::cout << "Sum :" << add(Oa, Ob) << std::endl;
	return 0;
}
