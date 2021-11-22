#ifndef STATE_H
#define STATE_H

#include <string>
#include "DragonCraft.h"

using namespace std;

class DragonCraft;

class State
{
private:
	string stateType;
	bool operational;

public:
	virtual void changeState(DragonCraft *Context) = 0;
	State(string ST);
	void setStateType(string StateType);
	string getStateType();
	void setoperational(bool operational);
	bool getoperational();
	State *init();
};

#endif
