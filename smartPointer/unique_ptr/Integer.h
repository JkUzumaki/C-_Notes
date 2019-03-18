#include<iostream>
#include<memory>

class Integer
{
public:
	Integer( int i = 0 ); // Integer default constructor
	~Integer(); // Integer destructor
	void setInteger( int i ); // set Integer value
	int getInteger() const; // return Integer value
private:
	int value;
};
