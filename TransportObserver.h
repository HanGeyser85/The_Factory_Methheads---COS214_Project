#ifndef TRANSPORTOBSERVER_H
#define TRANSPORTOBSERVER_H

#include "DObserver.h"
#include "DragonCraft.h"

using namespace std;

class TransportObserver : public DObserver{
private:
	DragonCraft* craft;
	bool transport;  //true for system error false for no errors atm

public:
	TransportObserver(DragonCraft* spacecraft){
		craft = spacecraft;
		transport = false;
	}

	void update(){
		if(craft->hasTransportFailure())
			transport = true;
		else
			transport = false;
	}

	void print(){
		if(transport)
			cout << "There is a transport failure that needs to be attended to!" << endl;
		else
			cout << "Transport systems are ready" << endl;
	}

};

#endif