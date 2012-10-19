#include "Context.h"
#include "State.h"
#include <iostream>

using namespace std;

int main()
{
	State *st = new ConcreteStateA();
	Context *con = new Context(st);
	con->OperationInterface();
	con->OperationInterface();
	con->OperationInterface();
	if (con != NULL)
	{
		delete con;
	}
	if (st != NULL)
	{
		st = NULL;
	}
	system("pause");
	return 0;

}