#ifndef LASER_H
#define LASER_H
#include "Satellite.h"
#include "Communications.h"
#include <vector>

class Laser : public Communications
{

public:
    Laser();
    void notify(Satellite *, string);
};

#endif