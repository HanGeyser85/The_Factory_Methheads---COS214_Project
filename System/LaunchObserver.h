//Concrete observer to notify state spacecraft pre/during/post launch

#ifndef LAUNCHOBSERVER_H
#define LAUNCHOBSERVER_H

#include "DObserver.h"
#include "DragonCraft.h"

using namespace std;

class LaunchObserver : public DObserver{
private:
	DragonCraft* craft;
	bool launch;  //true for system error false for no errors atm

public:
	LaunchObserver(DragonCraft* spacecraft){
		craft = spacecraft;
		launch = false;
	}

	void update(){
		if(craft->hasLaunchFailure())
			launch = true;
		else
			launch = false;
	}

	void print(){
		if(launch)
			cout << "There is a launch failure that needs to be attended to!" << endl;
		else
			cout << "Craft is ready for launch" << endl;
	}

};

#endif