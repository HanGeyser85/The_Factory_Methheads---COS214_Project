#ifndef DRAGONCONSTRUCTION_H
#define DRAGONCONSTRUCTION_H

#include "DragonCraft.h"

using namespace std;
/// This class is used to create instances of the DragonCraft
class DragonConsturction
{
private:
	DragonCraft *dC;

public:
	DragonConsturction();
	~DragonConsturction(){};
	void createDragonCraft();

	/// @param DC This paramater tells the class which DragonCraft object we want to clone.
	/// @see getDC()
	/// @return returns void
	void setDC(DragonCraft *DC);
	DragonCraft *getDC();
	virtual DragonCraft *factoryMethod() = 0;
};

#endif