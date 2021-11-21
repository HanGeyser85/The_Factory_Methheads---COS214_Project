#ifndef DRAGONCONSTRUCTION_H
#define DRAGONCONSTRUCTION_H

#include "DragonCraft.h"

using namespace std;

class DragonConsturction
{
	private: 
		DragonCraft* dC;		

	public: 
		DragonConsturction();
		~DragonConsturction(){};
		void createDragonCraft();
		void setDC(DragonCraft* DC);
		DragonCraft* getDC();
		virtual DragonCraft* factoryMethod() = 0;
};

DragonConsturction::DragonConsturction(){
	dC = nullptr;
}

void DragonConsturction::createDragonCraft() {
	dC = factoryMethod();
}

void DragonConsturction::setDC(DragonCraft* DC) {
	this->dC = DC;
}

DragonCraft* DragonConsturction::getDC() {
	return this->dC;
}

#endif
