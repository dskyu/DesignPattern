#ifndef _DIECTOR_
#define _DIECTOR_
class Person;
class Director
{
private:
	Person *p;
public:
	Director(Person *temp){p = temp;}
	void create()
	{
		p->createHead();
		p->createHand();
		p->createBody();
		p->createFoot();
	}
};

#endif