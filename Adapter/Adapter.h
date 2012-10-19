#ifndef _ADAPTER_
#define _ADAPTER_

class Target
{
public:
	Target();
	virtual ~Target();
	virtual void Resquest();
};

class Adaptee
{
public:
	Adaptee();
	virtual ~Adaptee();
	void SpecialRequest();
};

class Adapter: public Target,private Adaptee
{
public:
	Adapter();
	virtual ~Adapter();
	void Resquest();
};

#endif