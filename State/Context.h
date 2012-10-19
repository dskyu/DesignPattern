#ifndef _CONTEXT_
#define _CONTEXT_

class State;
class Context
{
public:
	Context();
	Context(State *state);
	~Context();
	void OperationInterface();
	void OperationChangeState();
private:
	friend class State;
	bool ChangeState(State *state);
	
	State *_state;
};

#endif