#ifndef DOOR_H
#define DOOR_H

#include "Decorator.h"

using namespace std;

class Door: public Decorator
{
	public: 
		Door();
		~Door(){}
		virtual void setDeployFailure(bool failure){};
		virtual void setSystemFailure(bool failure){};
		virtual void setLaunchFailure(bool failure){};
		virtual void setTransportFailure(bool failure){};
		virtual void setDockingFailure(bool failure){};
		virtual bool hasSystemFailure(){return 0;};
		virtual bool hasDeployFailure(){return 0;};
		virtual bool hasLaunchFailure(){return 0;};
		virtual bool hasTransportFailure(){return 0;};
		virtual bool hasDockingFailure(){return 0;};
};

Door::Door() : Decorator(){
    cout<<"Creating door/s to add to the DragonCraft..."<<endl;
}

#endif
