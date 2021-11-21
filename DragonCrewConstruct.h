#ifndef DRAGONCREWCONSTRUCT_H
#define DRAGONCREWCONSTRUCT_H

#include <iostream>
#include "DragonCraft.h"
#include "DragonConsturction.h"
#include "DragonCrew.h"

using namespace std;

class DragonCrewConstruct: public DragonConsturction
{
	public:
		DragonCrewConstruct() : DragonConsturction(){};
		~DragonCrewConstruct(){};
		virtual DragonCraft* factoryMethod();
};

DragonCraft* DragonCrewConstruct::factoryMethod() {
	cout<<"Created a Dragon Crew."<<endl;
	return new DragonCrew();
}

#endif
