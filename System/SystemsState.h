#ifndef SYSTEMSTATE_H
#define SYSTEMSTATE_H

#include <iostream>
#include <string>
#include "DragonCraft.h"
#include "LaunchState.h"
#include "State.h"

using namespace std;

class SystemsState : public State
{
public:
	SystemsState();
	virtual void changeState(DragonCraft *Context);
};

#endif
