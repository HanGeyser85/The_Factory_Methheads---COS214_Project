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
		virtual void changeState(DragonCraft* Context) = 0;
		State(string ST);
		void setStateType(string StateType);
		string getStateType();
		void setoperational(bool operational);
		bool getoperational();
		State* init();
};

State::State(string ST) {
	setStateType(ST);
	setoperational(true);
}

void State::setStateType(string StateType) {
	this->stateType = StateType;
}

string State::getStateType() {
	return this->stateType;
}

void State::setoperational(bool operational) {
	this->operational = operational;
}

bool State::getoperational() {
	return this->operational;
}

#endif
