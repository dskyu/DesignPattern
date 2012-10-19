#include<iostream>
#include <vector>
#include <string>
using namespace std;

class AbstractClass
{
public:
	void Show()
	{
		cout<<"我是"<<GetName()<<endl;
	}
protected:
	virtual string GetName()=0;
};

class Naruto : public AbstractClass
{
protected:
	virtual string GetName()
	{
		return "火影史上最帅的六代目---一鸣惊人naruto";
	}
};

class OnePice : public AbstractClass
{
protected:
	virtual string GetName()
	{
		return "我是无恶不做的大海贼---路飞";
	}
};
