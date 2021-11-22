#ifndef STARLINKFACTORY_H
#define STARLINKFACTORY_H

#include "SatelliteFactory.h"

class StarlinkFactory : public SatelliteFactory
{
public:
    Satellite *getSatellite();
};

#endif