#ifndef COMPUTERS_H
#define COMPUTERS_H

#include "Decorator.h"

using namespace std;

class Computers: public Decorator
{
	public:
		Computers();
		~Computers(){};
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

Computers::Computers() : Decorator() {
    cout<<"Creating computers to add to the DragonCraft..."<<endl;
}

#endif
