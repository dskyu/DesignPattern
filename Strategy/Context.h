//Context.h 
#ifndef _CONTEXT_H_ 
#define _CONTEXT_H_ 
 
class Strategy; 

class Context 
{ 
public: 
 Context(Strategy* stg); 
 ~Context(); 
 void DoAction();  
protected: 
 
private: 
 Strategy * _stg;
 
}; 
 
#endif //~_CONTEXT_H_