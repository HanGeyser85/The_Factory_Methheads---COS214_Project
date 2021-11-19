#include "Satellite.h"
#include <iostream>
Satellite::Satellite(int ID)
{
    id = ID;
}

void Satellite::addNextSat(Satellite *next)
{
    nextSat = next;
}

Satellite *Satellite::getNext()
{
    return nextSat;
}

int Satellite::getID()
{
    return id;
}

void Satellite::communicate(string msg)
{
    comms->notify(this, msg);
}