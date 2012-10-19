#include "Decorator.h"
#include <iostream>
using namespace std;

Component::Component()
{

}

Component::~Component()
{

}

void Component::Operation()
{
	
}

ConcreteComponent::ConcreteComponent()
{

}

ConcreteComponent::~ConcreteComponent()
{

}

void ConcreteComponent::Operation()
{	
	cout << "ConcreteComponent Operation" << endl;	
}

Decorator::Decorator(Component *com)
{
	m_component = com;
}

Decorator::~Decorator()
{
	delete m_component;
}

void Decorator::Operation()
{

}

ConcreteDecorator::ConcreteDecorator(Component *com):Decorator(com)
{

}

ConcreteDecorator::~ConcreteDecorator()
{

}

void ConcreteDecorator::Operation()
{
	m_component->Operation();
	AddBehavior();
}

void ConcreteDecorator::AddBehavior()
{
	cout << "ConcreteDecorator Operation" << endl;
}
