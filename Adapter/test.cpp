#include "Adapter.h"
#include <iostream>
using namespace std;

int main()
{
	Target *ada = new Adapter;
	ada->Resquest();
	system("pause");
	return 0;
}