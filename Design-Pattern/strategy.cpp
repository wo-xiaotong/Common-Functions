#include<iostream>
using namespace std;

class Strategy{
public:
	virtual ~Strategy(){};
	virtual void doSomething()=0;
};


class StrategyA:public Strategy{
public:
	virtual void doSomething(){cout<<"A\n";}
	~StrategyA(){cout<<"dtor A\n";}
};


class StrategyB:public Strategy{
public:
	virtual void doSomething(){cout<<"B\n";}
	~StrategyB(){cout<<"dtor B\n";}
};


class Context{
public:
	Context(Strategy *stra){st_=stra;}
	~Context(){st_=NULL;}

	void changeStrategy(Strategy *stra){st_=stra;}
	void doSomething(){st_->doSomething();}
private:
	Strategy * st_;
};

int main()
{
	Strategy *s=new StrategyA;
	Context ct=Context(s);
	ct.doSomething();
	delete s;
	//--------------
	s=new StrategyB;
	ct.changeStrategy(s);
	ct.doSomething();
	delete s;

	return 0;
}

