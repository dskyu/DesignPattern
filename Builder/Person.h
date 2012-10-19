#ifndef _PERSON_
#define _PERSON_

class Person
{
public:
	virtual void createHead() = 0;
	virtual void createHand() = 0;
	virtual void createBody() = 0;
	virtual void createFoot() = 0;
};

class ThinPreson : public Person
{
public:
	void createHead();
	void createHand();
	void createBody();
	void createFoot();
};

class ThickPreson : public Person
{
public:
	void createHead();
	void createHand();
	void createBody();
	void createFoot();
};

#endif
