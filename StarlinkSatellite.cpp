#include "StarlinkSatellite.h"
#include <iostream>

using namespace std;

StarlinkSatellite::StarlinkSatellite() : Satellite(0) {}

StarlinkSatellite::StarlinkSatellite(int id) : Satellite(id) {}

Satellite *StarlinkSatellite::clone()
{
    return new StarlinkSatellite(this->getID() + 1);
}

void StarlinkSatellite::set(Communications *coms)
{
    this->setComms(coms);
}