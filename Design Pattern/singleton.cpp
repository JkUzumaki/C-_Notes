#include<iostream>

class Single
{
private:
	explicit Single(){
		std::cout << "constructor \n";	
	}
	static int test;
	static Single* obj; 
public:
	Single* getInstance(){
		if(obj == NULL){
			obj = new Single;
			std::cout << "Object is created\n";
			return obj;
		} else {
			std::cout << "New object cannot be created" << std::endl;
			return obj;
		}
	}
};

Single* Single::obj = NULL;
int Single::test = 11;
int main()
{
	Single* obj;
	obj->getInstance();
	Single* obj1;
	obj1->getInstance();	
	Single* obj2;
	obj2->getInstance();	
	return 0;
}
