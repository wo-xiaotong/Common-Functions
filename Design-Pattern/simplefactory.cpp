#include<iostream>
using namespace std;

class Operation{
public:
	Operation(){cout<<"Operation\n";}
	virtual ~Operation(){cout<<"~Operation\n";}
	virtual int doCalc(int a,int b)=0;
};


class OperationAdd:public Operation{
public:
	OperationAdd(){cout<<"OperationAdd\n";}
	~OperationAdd(){cout<<"~OperationAdd\n";}
	int doCalc(int a,int b){return a+b;}
};


class OperationSub:public Operation{
public:
	OperationSub(){cout<<"OperationSub\n";}
	~OperationSub(){cout<<"~OperationSub\n";}
	int doCalc(int a,int b){return a-b;}
};


class OperationMul:public Operation{
public:
	OperationMul(){cout<<"OperationMul\n";}
	~OperationMul(){cout<<"~OperationMul\n";}
	int doCalc(int a,int b){return a*b;}
};


class OperationDiv:public Operation{
public:
	OperationDiv(){cout<<"OperationDiv\n";}
	~OperationDiv(){cout<<"~OperationDiv\n";}
	int doCalc(int a,int b){return a/b;}
};


class OperationFactory{
public:
	static Operation* createOperation(char op){	
		switch (op){
			case '+':
				return new OperationAdd;
			case '-':
				return new OperationSub;
			case '*':
				return new OperationMul;
			case '/':
				return new OperationDiv;
		}

		return NULL;
	}
};


int main()
{
	Operation* sub=OperationFactory::createOperation('+');
	cout<<sub->doCalc(1,2)<<endl;
	delete sub;	
	return 0;
}
