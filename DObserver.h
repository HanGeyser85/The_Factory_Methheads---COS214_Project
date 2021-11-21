//Abstract observer class for various observers for spacecraft

#ifndef OBSERVER_H
#define OBSERVER_H

#include "DragonCraft.h"
#include <iostream>

using namespace std;

class DObserver{
public:

	virtual void update() =0;
	virtual void print() =0;

};

#endif


