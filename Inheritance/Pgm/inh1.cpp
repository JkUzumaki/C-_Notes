#include<iostream>
#include<sstream>

class Employee
{
protected:
	std::string name;
	double pay;	
public:
	Employee(){
		name = "";
		pay = 0;
		std::cout << "Inside the employee constructor" << std::endl;
	}
	Employee(std::string empName, double payRate){
		name = empName;
		pay = payRate;
	}
	~Employee()
	{	std::cout << "Inside employee destructor\n";}
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
	
	double grossPay(int hours){
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
		std::cout << "Inside manager constructor" << std::endl;
		salaried = isSalaried;
	}
	~Manager(){ std::cout << "Inside manager destructor\n";}
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

int main()
{
	Employee emp1("JK Smith", 15.00);
	//Employee emp2("John Wick", 100000);
	std::cout << "Employee name " << emp1.getName() << " The pay is " << emp1.getPay() << std::endl;
	std::cout << "Employe gross pay " << emp1.grossPay(10) << "$ USD " << std::endl;
	Manager emp2("Jonathan", 100.0099, true);
	std::cout << "Employee name " << emp2.getName() << std::endl;
	std::cout << "Employee salary " << emp2.getPay() << std::endl;
	std::cout << "Is he slaried ? " << emp2.getSalaried() << std::endl;
	std::cout << "Employee gross pay " << emp2.grossPay(1) << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << emp2.toString() ;
	return 0;
}
