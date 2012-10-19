#include "Prototype.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a = "abc";
	string *p = &a;
	cout << (int)p << endl;
	ConcretePrototype1 *c1 = new ConcretePrototype1(a);
	cout << a << endl;
	ConcretePrototype2 *c2 = (ConcretePrototype2*)c1->Clone();
	c1->show();
	c2->show();
	system("pause");
	return 0;
}