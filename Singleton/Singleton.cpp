#include "Singleton.h"

#include <iostream>
using namespace std;

Singleton* Singleton::_instance = NULL;
Singleton::Singleton()
{
	cout << "Create singleton..." << endl;
}

Singleton* Singleton::Instance()
{
	if (_instance == NULL)
	{
		_instance = new Singleton;
	}
	return _instance;
}