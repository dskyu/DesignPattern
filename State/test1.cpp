/*#include <iostream>
using namespace std;

class Work;
class ForenoonState;
class NoonState;

class State
{
public:
	virtual void WriteProgram(Work* w)=0;
};

class Work
{
private:
	State* current;
public:
	double hour;
public:
	Work();
	void SetState(State* temp)
	{
		current =temp;
	}
	void Writeprogram()
	{
		current->WriteProgram(this);
	}

};

class NoonState :public State
{
public:
	virtual void WriteProgram(Work* w)
	{
		cout<<"execute"<<endl;
		if((w->hour)<13)
			cout<<"还不错啦"<<endl;
		else
			cout<<"不行了，还是睡觉吧"<<endl;
	}
};

class ForenoonState : public State
{
public:
	virtual void WriteProgram(Work* w)
	{
		if((w->hour)<12)
			cout<<"现在的精神无敌好"<<endl;
		else
		{
			w->SetState(new NoonState());
			w->Writeprogram(); //注意加上这句
		}
	}
};


Work::Work()
{
	current = new ForenoonState();
}

int main()
{
	Work* mywork=new Work();
	mywork->hour=9;
	mywork->Writeprogram();
	mywork->hour = 14;
	mywork->Writeprogram();
	system("pause");
	return 0;
}
*/