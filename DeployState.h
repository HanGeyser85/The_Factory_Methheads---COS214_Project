#ifndef DEPLOYSTATE_H
#define DEPLOYSTATE_H

#include <iostream>
#include <string>
#include "DragonCraft.h"
#include "State.h"

using namespace std;

class DeployState: public State
{
	public:
		DeployState();
		virtual void changeState(DragonCraft* Context);
};

DeployState::DeployState() : State("Deploy State") {
}

void DeployState::changeState(DragonCraft* Context) {
	cout<<"Done"<<endl;
	Context->setState(nullptr);
}

#endif
