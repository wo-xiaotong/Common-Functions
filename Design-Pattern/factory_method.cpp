#include<iostream>
using namespace std;

class Operation{
public:
	virtual ~Operation(){};
	virtual int doCalc()=0;
};


class OperationAdd:public Operation{
public:
	int doCalc(){cout<<"doCalc Add\n";}
};

class OperationSub:public Operation{
public:
	int doCalc(){cout<<"doCalc Sub\n";}
};

class MethodFactory{
public:
	static Operation* createOperationAdd(){
		return new OperationAdd;
	}
	
	static Operation* createOperationSub(){
		return new OperationSub;
	}
};

int main()
{
	Operation* op=MethodFactory::createOperationAdd();
	op->doCalc();
	delete op;
	return 0;
}
