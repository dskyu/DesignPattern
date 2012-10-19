#ifndef _PROTOTYPE_
#define _PROTOTYPE_

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Prototype
{
public:
	string m_strName;
	Prototype(string &strName) {m_strName = strName;strName+="ddd";}
	Prototype() {m_strName = "";}
	void show()
	{
		cout << m_strName << endl;
	}
	virtual Prototype* Clone() = 0;
};

class ConcretePrototype1 : public Prototype 
{ 
public: 
	ConcretePrototype1(string &strName) : Prototype(strName){cout << (int)&strName << endl;}
	ConcretePrototype1(){}

	virtual Prototype* Clone() 
	{ 
		ConcretePrototype1 *p = new ConcretePrototype1() ; 
		*p = *this ; 
		return p ; 
	} 
};

class ConcretePrototype2 : public Prototype 
{ 
public: 
	ConcretePrototype2(string strName) : Prototype(strName){}
	ConcretePrototype2(){}

	virtual Prototype* Clone() 
	{ 
		ConcretePrototype2 *p = new ConcretePrototype2() ; 
		*p = *this ;
		return p ; 
	} 
}; 

#endif