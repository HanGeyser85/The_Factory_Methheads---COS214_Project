#ifndef TRANSPORTSTATE_H
#define TRANSPORTSTATE_H

#include <iostream>
#include <string>
#include "DragonCraft.h"
#include "SystemsState.h"
#include "State.h"

using namespace std;

class TransportState : public State
{
public:
	TransportState();
	virtual void changeState(DragonCraft *Context);
};

#endif
