/*
#include  "Handle.h" 
#include  <iostream> 
using namespace std; 

int main(int argc,char* argv[])  
{ 
	Handle* h1 = new ConcreteHandleA(); 
	Handle* h2 = new ConcreteHandleB(); 
	h1->SetSuccessor(h2); 
	h2->SetSuccessor(h1);
	h1->HandleRequest(); 

	system("pause");
	return 0;  
} 
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
//����
class Request
{
public:
	string m_strContent;
	int m_nNumber;
};
//������
class Manager
{
protected:
	Manager* manager;
	string name;
public:
	Manager(string temp)
	{
		name = temp;
	}
	void SetSuccessor(Manager* temp)
	{
		manager = temp; 
	}
	virtual void GetRequest(Request* request) = 0;
};
//����
class CommonManager : public Manager
{
public:
	CommonManager(string strTemp) : Manager(strTemp){}
	virtual void GetRequest(Request* request)
	{
		if ( request->m_nNumber>=0 && request->m_nNumber<10 )
		{
			cout<<name<<"������"<<request->m_nNumber<<"������"<<endl;
		}
		else
		{
			manager->GetRequest(request);
		}
	}
};
//�ܼ�
class MajorDomo : public Manager
{
public:
	MajorDomo(string name) : Manager(name){}

	virtual void GetRequest(Request* request)
	{
		if(request->m_nNumber>=10)
		{
			cout<<name<<"������"<<request->m_nNumber<<"������"<<endl;
		}
	}
};

//�ͻ���
int main()
{
	Manager * common = new CommonManager("�ž���");
	Manager * major = new MajorDomo("���ܼ�");

	common->SetSuccessor(major);

	Request* req = new Request();
	req->m_nNumber = 33;
	common->GetRequest(req);

	req->m_nNumber = 3;
	common->GetRequest(req);
	system("pause");
	return 0;
}
