#include<iostream>

class Distance
{
private:
	int meter;
public:
	Distance(): meter(100){}
	friend int addFive(Distance);		
};

int addFive(Distance d)
{
	d.meter += 5;
	return d.meter;
}

int main()
{
	Distance obj;
	std::cout << "Distance: " << addFive(obj) << std::endl;
	return 0;
}
