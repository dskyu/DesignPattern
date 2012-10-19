#include "Abstraction.h"
#include "AbstractionImp.h"
#include <iostream>
int main()
{
	AbstractionImp *imp = new ConcreteAbstractionImpB;
	Abstraction *abs = new RefinedAbstraction(imp);
	abs->Operation();
	system("pause");
	return 0;
}