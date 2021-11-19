#include "StarlinkSatellite.h"
#include <iostream>

using namespace std;

StarlinkSatellite::StarlinkSatellite(int id) : Satellite(id) {}

Satellite *StarlinkSatellite::clone()
{
    return new StarlinkSatellite(this->getID() + 1);
}

void StarlinkSatellite::communicate(string msg)
{
    cout << "Satellite " << this->getID() << "sends message: " << msg << endl;
    if (nextSat != nullptr)
    {
        nextSat->communicate(msg);
    }
}