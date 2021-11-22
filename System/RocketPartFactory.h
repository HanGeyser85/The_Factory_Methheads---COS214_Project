#ifndef ROCKETPARTFACTORY_H
#define ROCKETPARTFACTORY_H
#include "RocketPart.h"
using namespace std;

class RocketPartFactory
{
    private:

    public:
        virtual RocketPart* produce()=0;
};
#endif