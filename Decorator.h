#ifndef DECORATOR_H
#define DECORATOR_H

#include "DragonCraft.h"

using namespace std;

class Decorator: public DragonCraft
{
	protected:
		~Decorator();

	public:
		DragonCraft* dCComp;
	 	Decorator();
		virtual void addDecoration(DragonCraft* Dc);
};

Decorator::Decorator() {
	dCComp = nullptr;
}

Decorator::~Decorator() {
	dCComp = nullptr;
	delete dCComp;
}

void Decorator::addDecoration(DragonCraft* Dc) {
	if (dCComp == nullptr) {
		dCComp = Dc;
	} else {
		dCComp->addDecoration(Dc);
	}
}

#endif
