#ifndef STARLINKSATELLITE_H
#define STARLINKSATELLITE_H

#include "Satellite.h"

class StarlinkSatellite : public Satellite
{
protected:
    StarlinkSatellite(int);

public:
    StarlinkSatellite(/* args */);
    ~StarlinkSatellite();
    void communicate(string);
    Satellite *clone();
    void set(Communications *coms);
};

#endif