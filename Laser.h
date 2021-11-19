#ifndef LASER_H
#define LASER_H
#include "Satellite.h"
#include <vector>

class Laser
{

public:
    Laser();
    void notify(Satellite *, string);
};

#endif