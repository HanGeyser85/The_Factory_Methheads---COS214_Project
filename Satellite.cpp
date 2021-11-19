#include "Satellite.h"

Satellite::Satellite(int ID)
{
    id = ID;
}

void Satellite::addNextSat(Satellite *next)
{
    nextSat = next;
}

int Satellite::getID()
{
    return id;
}