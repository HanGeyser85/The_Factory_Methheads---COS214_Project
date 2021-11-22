#include "DragonConsturction.h"
#include "DragonCraft.h"

using namespace std;

DragonConsturction::DragonConsturction()
{
    dC = nullptr;
}

void DragonConsturction::createDragonCraft()
{
    dC = factoryMethod();
}

void DragonConsturction::setDC(DragonCraft *DC)
{
    this->dC = DC;
}

DragonCraft *DragonConsturction::getDC()
{
    return this->dC;
}