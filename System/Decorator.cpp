#include "Decorator.h"
#include "DragonCraft.h"

using namespace std;

Decorator::Decorator()
{
    dCComp = nullptr;
}

Decorator::~Decorator()
{
    dCComp = nullptr;
    delete dCComp;
}

void Decorator::addDecoration(DragonCraft *Dc)
{
    if (dCComp == nullptr)
    {
        dCComp = Dc;
    }
    else
    {
        dCComp->addDecoration(Dc);
    }
}