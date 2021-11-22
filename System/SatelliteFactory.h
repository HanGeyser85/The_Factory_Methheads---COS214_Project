#ifndef SATELLITEFACTORY_H
#define SATELLITEFACTORY_H

#include "Satellite.h"

class SatelliteFactory
{
private:
    Satellite *sat;

public:
    SatelliteFactory();
    ~SatelliteFactory();
    Satellite *createSatellite();
    virtual Satellite *getSatellite() = 0;
};

#endif