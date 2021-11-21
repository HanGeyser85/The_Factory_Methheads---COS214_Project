#ifndef LAUNCHSTATE_H
#define LAUNCHSTATE_H

#include <iostream>
#include <string>
#include "DragonCraft.h"
#include "State.h"

using namespace std;

class LaunchState: public State
{
	public: 
		LaunchState();
		virtual void changeState(DragonCraft* Context);
};
LaunchState::LaunchState() : State("Launch State"){
}

void LaunchState::changeState(DragonCraft* Context) {
	cout<<"Going to docking state."<<endl;
	Context->setState(new DockingState());
}
#endif
