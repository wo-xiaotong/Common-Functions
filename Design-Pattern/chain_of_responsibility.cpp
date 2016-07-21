#include<iostream>
#include<algorithm>

using namespace std;

//职责链模式
/*
	使多个对象都有机会处理请求，避免发送者和接收者之间的耦合，将这些对象组织成一条链，一沿着这条链发送消息，知道有一个对象处理消息为止
	*/

class Handler {
public:
	virtual void process(int n) = 0;
	void setHandler(Handler *h) { handler = h; }

protected:
	Handler *handler;
};

class Process1: public Handler {
public:
	void process(int n) {
		if (n < 10)cout << "1\n";
		else if (handler != NULL)handler->process(n);
	}
};

class Process2 : public Handler {
public:
	void process(int n) {
		if (n >= 10 && n < 100)cout << "2\n";
		else if (handler != NULL)handler->process(n);
	}
};

int main()
{
	Handler *p1 = new Process1;
	Handler *p2 = new Process2;
	p1->setHandler(p2);

	p1->process(1);
	p1->process(15);

	delete p1;
	delete p2;
	return 0;
}
