#include<iostream>
#include<sstream>
#include<vector>
class Employee
{
protected:
	std::string name;
	double pay;	
public:
	Employee(){
		name = "";
		pay = 0;
	//	std::cout << "Inside the employee constructor" << std::endl;
	}
	Employee(std::string empName, double payRate){
		name = empName;
		pay = payRate;
	}
	~Employee()
	{//	std::cout << "Inside employee destructor\n";
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
	}
	
	virtual double grossPay(int hours){
		return pay* hours;
	}
};

class Manager : public Employee
{
private:
	bool salaried;
public:
	Manager( std::string name, double payRate, bool isSalaried)
		:Employee(name, payRate)
	{
		//std::cout << "Inside manager constructor" << std::endl;
		salaried = isSalaried;
	}
	~Manager(){ 
		//std::cout << "Inside manager destructor\n";
		}
	bool getSalaried(){
		return salaried;
	}
	double grossPay(int hour)
	{
		if(salaried)
			return pay;
		else
			return pay* hour;
	}
	std::string toString(){
		std::stringstream stm;
		std::string salary;
		if(salaried)
			salary = "Salaried";
		else
			salary = "Hourly";
		stm << name << ": " << pay << ": " << salary << std::endl;

		return stm.str();
	}
};
//////////////////////
//To make  a call to the correct function based on the base class pointer we need to 
//Compiler decide at run time based on when it has to be called
//Based on the address the value are being called
//////////////////////
int main()
{	
	Employee emp1("Jones", 25.00);
	Manager mgr1("Smith", 1200, true);
	Employee *emPtr;
	emPtr = &emp1;
	std::cout << "Name: " << emPtr->getName() << " Pay: " << emPtr->grossPay(40) << std::endl;
	emPtr = &mgr1;
	std::cout << "Name: " << emPtr->getName() << " Pay: " << emPtr->grossPay(40) << std::endl;
	std::vector<Employee*> vemp;
	vemp.push_back(&emp1);
	vemp.push_back(&mgr1);
	for(int i = 0; i < vemp.size(); i++)
		std::cout << "Name : " << vemp[i]->getName() << "\nPay :" << vemp[i]->grossPay(40) << std::endl;

	
	return 0;
}
