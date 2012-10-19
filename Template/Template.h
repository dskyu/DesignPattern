#include<iostream>
#include <vector>
#include <string>
using namespace std;

class AbstractClass
{
public:
	void Show()
	{
		cout<<"����"<<GetName()<<endl;
	}
protected:
	virtual string GetName()=0;
};

class Naruto : public AbstractClass
{
protected:
	virtual string GetName()
	{
		return "��Ӱʷ����˧������Ŀ---һ������naruto";
	}
};

class OnePice : public AbstractClass
{
protected:
	virtual string GetName()
	{
		return "�����޶����Ĵ���---·��";
	}
};
