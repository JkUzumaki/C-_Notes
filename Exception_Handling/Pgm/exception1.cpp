#include<iostream>

const int DivideByZero = 1;
int main()
{
	try{
		int numer = 12;
		int deno = 0;
		if(deno == 0){
			throw DivideByZero;
		}else{
			std::cout << "The divison is " << numer/deno << "\n";
		}
	}
	catch(int e){
		if(e == DivideByZero)
			//Normally for error msg we use cerr
			std::cout << "Can't divide by zero\n";
	}
	return 0;
}
