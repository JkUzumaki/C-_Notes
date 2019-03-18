#include<iostream>
#include<stdexcept>
using namespace std;

class DivideByZero: public runtime_error
{
public:
	DivideByZero():runtime_error("Divide by zero exception"){}
};

double quotient(double num, double deno)
{
	if(deno == 0)
		throw DivideByZero();
	else
		return num/deno;
}

int main()
{
	double n1, n2, ratio;
	cout << "Enter the numerator\n";
	cin >> n1;
	cout << "Enter the denominator\n";
	cin >> n2;
	try{
		ratio = quotient(n1, n2);
		cout << "result is " << ratio << endl;
	}
	catch(DivideByZero &except){
		cout << except.what() << endl;
	}
	return 0;
}
