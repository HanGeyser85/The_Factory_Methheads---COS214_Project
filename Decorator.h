#ifndef DECORATOR_H
#define DECORATOR_H

#include "DragonCraft.h"

using namespace std;
class Decorator : public DragonCraft
{
protected:
	~Decorator();

public:
	DragonCraft *dCComp;
	Decorator();
	virtual void addDecoration(DragonCraft *Dc);
};

#endif