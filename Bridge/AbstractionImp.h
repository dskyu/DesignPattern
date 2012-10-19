//AbstractionImp.h 
#ifndef _ABSTRACTIONIMP_H_ 
#define _ABSTRACTIONIMP_H_ 
class AbstractionImp 
{ 
public: 
	virtual ~AbstractionImp(); 
	virtual void Operation() = 0; 
protected: 
	AbstractionImp() ; 
private: 
}; 
class ConcreteAbstractionImpA:public AbstractionImp 
{ 
public: 
	ConcreteAbstractionImpA(); 
	~ConcreteAbstractionImpA(); 
	void Operation() ;  
protected: 
private: 
}; 
class ConcreteAbstractionImpB:public AbstractionImp 
{ 
public: 
	ConcreteAbstractionImpB(); 
	~ConcreteAbstractionImpB(); 
	void Operation() ;  
protected: 
private: 
}; 

#endif //~_ABSTRACTIONIMP_H_ 