#ifndef _DECORATOR_
#define _DECORATOR_

class Component
{
public:
	virtual ~Component();
	virtual void Operation();
protected:
	Component();
};

class ConcreteComponent : public Component
{
public:
	ConcreteComponent();
	~ConcreteComponent();
	void Operation();
};

class Decorator:public Component
{
protected:
	Component *m_component;
public:
	Decorator(Component *com);
	virtual ~Decorator();
	void Operation();

};

class ConcreteDecorator:public Decorator
{
public:
	ConcreteDecorator(Component *com);
	~ConcreteDecorator();
	void Operation();
	void AddBehavior();

};

#endif