#include <iostream>

using namespace std;

class Singleton
{
private:
    static bool instanceFlag;
    static Singleton *single;
    Singleton()
    {
	cout << "Const\n";
        //private constructor
    }
public:
	
    /*Singleton()
    {
	cout << "Const\n";
        //private constructor
    }*/
    int global;
    static Singleton* getInstance();
    void method();
    ~Singleton()
    {
        instanceFlag = false;
    }
};

bool Singleton::instanceFlag = false;
Singleton* Singleton::single = NULL;
Singleton* Singleton::getInstance()
{
    if(! instanceFlag)
    {
        single = new Singleton();
        instanceFlag = true;
	cout << "Obj crt\n";
        return single;
    }
    else
    {
        return single;
    }
}

void Singleton::method()
{
    
    cout << "Method of the singleton class" << global << endl;

}



int main()

{

    Singleton *sc1;//,*sc2;

   //sc1 = new Singleton();    
    
    sc1 = Singleton::getInstance();

    sc1->method();
    Singleton *sc2;
    //sc2 = Singleton::getInstance();
    sc2->method();
    cout << &sc1 << " " << &sc2 << endl;
    return 0;
}
