#include "SatelliteFactory.h"
#include <iostream>

using namespace std;

SatelliteFactory::SatelliteFactory()
{
    sat = nullptr;
}

SatelliteFactory::~SatelliteFactory()
{
    delete sat;
}

void SatelliteFactory::createSatellite()
{
    if (sat == nullptr)
    {
        sat = getSatellite();
    }
    else
    {
        cout << "Satellite already created\n";
    }
}