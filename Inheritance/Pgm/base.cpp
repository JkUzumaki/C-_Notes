#include<iostream>
#include<sstream>

class Employee
{
private:
	std::string name;
	double pay;	
public:
	Employee(){
		name = "";
		pay = 0;
	}
	Employee(std::string empName, double payRate){
		name = empName;
		pay = payRate;
	}
	//Get
	std::string getName(){
		return name;
	}
	double getPay(){
		return pay;
	}
	//Set
	void setPay(double payRate){
		pay = payRate;
	}
	void setName(std::string empName){
		name = empName;
	}
	//toString function
	std::string toString()
	{
		std::stringstream strr;
		strr << name << ": " << pay;
		return strr.str();	
		//return name + ": " pay;
	}
};

int main()
{
	Employee emp1("JK Smith", 40000);
	Employee emp2("John Wick", 100000);
	std::cout << emp1.toString() << std::endl;
	std::cout << emp2.toString() << std::endl;
	return 0;
}
