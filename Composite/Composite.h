#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Component
{
public:
	string m_strName;
	Component(string strName)
	{
		m_strName = strName;
	}

	virtual void Add(Component *Com) = 0;
	virtual void Display(int nDepth) = 0;
};

class Leaf : public Component
{
public:
	Leaf(string strName):Component(strName)	{}
	virtual void Add(Component *com)
	{
		cout << "lead can't add" << endl;
	}

	virtual void Display(int nDepth)
	{
		string tempstr;
		for (int i = 0;i < nDepth;i++)
		{
			tempstr += "-";
		}
		tempstr += m_strName;
		cout << tempstr <<endl;
	}
};

class Composite:public Component
{
private:
	vector<Component *> m_component;
public:
	Composite(string strName):Component(strName){}
	virtual void Add(Component *com)
	{
		m_component.push_back(com);
	}
	virtual void Display(int nDepth)
	{
		string tempstr;
		for (int i=0;i<nDepth;i++)
		{
			tempstr+="-";
		}
		tempstr+=m_strName;
		cout << tempstr << endl;
		vector<Component *>::iterator p = m_component.begin();
		while (p!=m_component.end())
		{
			(*p)->Display(nDepth+2);
			p++;
		}
	}
};



class Company
{
protected:
	string m_strName;
public:
	Company(string strName)
	{
		m_strName = strName;
	}

	virtual void Add(Company* c)=0;
	virtual void Display(int nDepth)=0;
	virtual void LineOfDuty()=0;
};

class ConcreteCompany: public Company
{
private:
	vector<Company*> m_company;
public:
	ConcreteCompany(string strName):Company(strName){}

	virtual void Add(Company* c)
	{
		m_company.push_back(c);
	}
	virtual void Display(int nDepth)
	{
		string strtemp;
		for(int i=0; i < nDepth; i++)
		{
			strtemp += "-";
		}
		strtemp +=m_strName;
		cout<<strtemp<<endl;

		vector<Company*>::iterator p=m_company.begin();
		while (p!=m_company.end())
		{
			(*p)->Display(nDepth+2);
			p++;
		}
	}
	virtual void LineOfDuty()
	{
		vector<Company*>::iterator p=m_company.begin();
		while (p!=m_company.end())
		{
			(*p)->LineOfDuty();
			p++;
		}
	}
};

class HrDepartment : public Company
{
public:

	HrDepartment(string strname) : Company(strname){}

	virtual void Display(int nDepth)
	{
		string strtemp;
		for(int i = 0; i < nDepth; i++)
		{
			strtemp += "-";
		}

		strtemp += m_strName;
		cout<<strtemp<<endl;
	}
	virtual void Add(Company* c)
	{
		cout<<"error"<<endl;
	}

	virtual void LineOfDuty()
	{
		cout<<m_strName<<":ÕÐÆ¸ÈË²Å"<<endl;
	}
};
