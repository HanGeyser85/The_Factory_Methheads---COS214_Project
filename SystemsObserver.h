//Concrete observer to notify current state of systems

#ifndef SYSTEMSOBSERVER_H
#define SYSTEMSOBSERVER_H

#include "DObserver.h"
#include "DragonCraft.h"

using namespace std;

class SystemsObserver : public DObserver{

private:
	DragonCraft* craft;
	bool system;  //true for system error false for no errors atm

public:
	SystemsObserver(DragonCraft* spacecraft){
		craft = spacecraft;
		system = false;
	}

	void update(){
		if(craft->hasSystemFailure())
			system = true;
		else
			system = false;
	}

	void print(){
		if(system)
			cout << "There is a system failure that needs to be attended to!" << endl;
		else
			cout << "All systems are ready to go" << endl;
	}

};

#endif


