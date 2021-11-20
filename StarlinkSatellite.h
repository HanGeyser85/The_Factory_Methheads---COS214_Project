#ifndef STARLINKSATELLITE_H
#define STARLINKSATELLITE_H

#include "Satellite.h"

class StarlinkSatellite : public Satellite
{
protected:
    StarlinkSatellite(int);

public:
    StarlinkSatellite();
    ~StarlinkSatellite();
    Satellite *clone();
    void set(Communications *);
};

#endif