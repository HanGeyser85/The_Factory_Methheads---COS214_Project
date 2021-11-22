#ifndef DOCKINGSTATE_H
#define DOCKINGSTATE_H

#include <iostream>
#include <string>
#include "DeployState.h"
#include "DragonCraft.h"
#include "State.h"

using namespace std;

class DockingState : public State
{
public:
	DockingState();
	virtual void changeState(DragonCraft *Context);
};

#endif
