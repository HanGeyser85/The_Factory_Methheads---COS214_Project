#ifndef SATELLITEFACTORY_H
#define SATELLITEFACTORY_H

#include "Satellite.h"
/// Base class to create all other satellites from.
///
/// This is a factory, which means it can produce many items that derive from this.
class SatelliteFactory
{
private:
    Satellite *sat;

public:
    SatelliteFactory();
    ~SatelliteFactory();

        /// @see getSatellite()
        /// @return returns a new Satellite object pointer
    Satellite *createSatellite();
    virtual Satellite *getSatellite() = 0;
};

#endif