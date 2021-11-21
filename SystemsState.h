#ifndef SYSTEMSTATE_H
#define SYSTEMSTATE_H

#include <iostream>
#include <string>
#include "DragonCraft.h"
#include "State.h"

using namespace std;

class SystemsState: public State
{
	public: 
		SystemsState();
		virtual void changeState(DragonCraft* Context);
};
SystemsState::SystemsState() : State("System State") {
}

void SystemsState::changeState(DragonCraft* Context) {
	cout<<"Going to launch state."<<endl;
	Context->setState(new LaunchState());
}

#endif
