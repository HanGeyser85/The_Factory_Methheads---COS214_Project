//Composite of Composite DP

#ifndef FALCONROCKET_H
#define FALCONROCKET_H
#include "RocketPart.h"
#include <list>
using namespace std;

class FalconRocket : public RocketPart
{
    private:
        list<RocketPart*> parts;

    public:
    
};
#endif