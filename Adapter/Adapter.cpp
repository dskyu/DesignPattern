#include "Adapter.h"
#include <iostream>
using namespace std;

Target::Target()
{

}

Target::~Target()
{

}

void Target::Resquest()
{
	cout << "target resquest" << endl;
}

Adaptee::Adaptee()
{

}

Adaptee::~Adaptee()
{

}

void Adaptee::SpecialRequest(){
	cout << "adaptee special request" << endl;
}

Adapter::Adapter()
{

}

Adapter::~Adapter()
{

}

void Adapter::Resquest()
{
	this->SpecialRequest();
}


