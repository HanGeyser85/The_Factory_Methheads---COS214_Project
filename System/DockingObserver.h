#ifndef DOCKINGOBSERVER_H
#define DOCKINGOBSERVER_H

#include "DObserver.h"
#include "DragonCraft.h"

using namespace std;

class DockingObserver : public DObserver{
private:
	DragonCraft* craft;
	bool docking;  //true for system error false for no errors atm

public:
	DockingObserver(DragonCraft* spacecraft){
		craft = spacecraft;
		docking = false;
	}

	void update(){
		if(craft->hasDockingFailure())
			docking = true;
		else
			docking = false;
	}

	void print(){
		if(docking)
			cout << "There is a docking failure that needs to be attended to!" << endl;
		else
			cout << "Docking systems are ready" << endl;
	}

};

#endif