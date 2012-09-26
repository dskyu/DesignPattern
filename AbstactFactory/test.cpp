#include "AbstractFactory.h"
#include "Product.h"
#include <iostream>

int main()
{
	AbstractFactory *fac = new ConcreteFactory2;
	fac->CreateProductA();
	fac->CreateProductB();
	system("pause");
	return 0;

}