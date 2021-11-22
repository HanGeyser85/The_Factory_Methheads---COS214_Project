#ifndef STARLINKSATELLITE_H
#define STARLINKSATELLITE_H
/// Child class of Satellite.
///
/// This is what is being produced by the StarLinkFactory
#include "Satellite.h"

class StarlinkSatellite : public Satellite
{
protected:
    StarlinkSatellite(int);

public:
    StarlinkSatellite();
    ~StarlinkSatellite();
    Satellite *clone();

        /// @param c This paramater tells the class which Communications object to set to the satellite.
        /// @see clone()
    void set(Communications* c);
};

#endif