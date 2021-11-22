#include "StarlinkFactory.h"
#include "StarlinkSatellite.h"

Satellite *StarlinkFactory::getSatellite()
{
    return new StarlinkSatellite();
}