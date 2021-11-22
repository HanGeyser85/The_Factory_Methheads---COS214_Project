#ifndef DRAGONSPACECRAFTCONSTRUCT_H
#define DRAGONSPACECRAFTCONSTRUCT_H

#include <iostream>
#include "DragonCraft.h"
#include "DragonConsturction.h"
#include "DragonSpacecraft.h"

using namespace std;
/// Specialized class of the DragonConstruction.
///
/// This constructs the concrete classes DragonSpacecrafts.
class DragonSpacecraftConstruct : public DragonConsturction
{
public:
	DragonSpacecraftConstruct() : DragonConsturction(){};
	~DragonSpacecraftConstruct(){};
	virtual DragonCraft *factoryMethod();
};

#endif
