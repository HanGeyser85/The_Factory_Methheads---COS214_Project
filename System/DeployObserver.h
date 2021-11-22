//Concrete observer to notify state of crew and/or cargo deployment

#ifndef DEPLOYOBSERVER_H
#define DEPLOYOBSERVER_H

#include "DObserver.h"
#include "DragonCraft.h"

using namespace std;

class DeployObserver : public DObserver{
private:
	DragonCraft* craft;
	bool deploy;  //true for system error false for no errors atm

public:
	DeployObserver(DragonCraft* spacecraft){
		craft = spacecraft;
		deploy = false;
	}

	void update(){
		if(craft->hasDeployFailure())
			deploy = true;
		else
			deploy = false;
	}

	void print(){
		if(deploy)
			cout << "There is a deployment failure that needs to be attended to!" << endl;
		else
			cout << "Cargo is ready for deployment" << endl;
	}

};

#endif