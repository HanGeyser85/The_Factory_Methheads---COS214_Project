#ifndef DRAGONSPACECRAFTCONSTRUCT_H
#define DRAGONSPACECRAFTCONSTRUCT_H

#include <iostream>
#include "DragonCraft.h"
#include "DragonConsturction.h"
#include "DragonSpacecraft.h"

using namespace std;

class DragonSpacecraftConstruct : public DragonConsturction
{
public:
	DragonSpacecraftConstruct() : DragonConsturction(){};
	~DragonSpacecraftConstruct(){};
	virtual DragonCraft *factoryMethod();
};

#endif
