#include "StarlinkSatellite.h"
#include <iostream>

using namespace std;

StarlinkSatellite::StarlinkSatellite(int id) : Satellite(id) {}

Satellite *StarlinkSatellite::clone()
{
    return new StarlinkSatellite(this->getID() + 1);
}