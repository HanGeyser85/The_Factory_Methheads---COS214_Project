#ifndef LAUNCHSTATE_H
#define LAUNCHSTATE_H

#include <iostream>
#include <string>
#include "DragonCraft.h"
#include "DockingState.h"
#include "State.h"

using namespace std;

class LaunchState : public State
{
public:
	LaunchState();
	virtual void changeState(DragonCraft *Context);
};

#endif
