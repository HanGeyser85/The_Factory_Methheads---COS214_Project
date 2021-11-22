#ifndef DOCKINGSTATE_H
#define DOCKINGSTATE_H

#include <iostream>
#include <string>
#include "DeployState.h"
#include "DragonCraft.h"
#include "State.h"

using namespace std;
/// This moves rockets to the final state of the launch, the docking state when the launch is finished.
class DockingState : public State
{
public:
	DockingState();
	virtual void changeState(DragonCraft *Context);
};

#endif
