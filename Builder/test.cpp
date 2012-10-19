#include "Person.h"
#include "Director.h"
#include <iostream>
int main()
{
	Person *p = new ThinPreson;
	Person *p2 = new ThickPreson;
	Director *d = new Director(p2);
	d->create();
	delete p;
	delete d;
	system("pause");
	return 0;
}