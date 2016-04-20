#include<iostream>
using namespace std;

class Singleton{
private:
	static Singleton* instance;
	Singleton(){}
	
public:
	static Singleton* getInstance(){
		if(instance==NULL){
			instance=new Singleton();
		}
		return instance;
	}
};

Singleton* Singleton::instance=NULL;

int main()
{	
	//same instance
	Singleton *s1=Singleton::getInstance();
	Singleton *s2=Singleton::getInstance();
	
	return 0;
}
