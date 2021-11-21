#ifndef TRANSPORTSTATE_H
#define TRANSPORTSTATE_H

#include <iostream>
#include <string>
#include "DragonCraft.h"
#include "SystemsState.h"
#include "State.h"

using namespace std;

class TransportState: public State
{
	public: 
		TransportState();
		virtual void changeState(DragonCraft* Context);
};
TransportState::TransportState() : State("Transport State") {
}

void TransportState::changeState(DragonCraft* Context) {
	cout<<"In transport state"<<endl;
	cout<<"Going to system state."<<endl;
	Context->setState(new SystemsState());
}

#endif
