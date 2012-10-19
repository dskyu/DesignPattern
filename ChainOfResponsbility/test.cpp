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
//请求
class Request
{
public:
	string m_strContent;
	int m_nNumber;
};
//管理者
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
//经理
class CommonManager : public Manager
{
public:
	CommonManager(string strTemp) : Manager(strTemp){}
	virtual void GetRequest(Request* request)
	{
		if ( request->m_nNumber>=0 && request->m_nNumber<10 )
		{
			cout<<name<<"处理了"<<request->m_nNumber<<"个请求"<<endl;
		}
		else
		{
			manager->GetRequest(request);
		}
	}
};
//总监
class MajorDomo : public Manager
{
public:
	MajorDomo(string name) : Manager(name){}

	virtual void GetRequest(Request* request)
	{
		if(request->m_nNumber>=10)
		{
			cout<<name<<"处理了"<<request->m_nNumber<<"个请求"<<endl;
		}
	}
};

//客户端
int main()
{
	Manager * common = new CommonManager("张经理");
	Manager * major = new MajorDomo("李总监");

	common->SetSuccessor(major);

	Request* req = new Request();
	req->m_nNumber = 33;
	common->GetRequest(req);

	req->m_nNumber = 3;
	common->GetRequest(req);
	system("pause");
	return 0;
}
