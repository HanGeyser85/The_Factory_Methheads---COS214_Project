//Composite of Composite DP

#ifndef FALCONROCKET_H
#define FALCONROCKET_H
#include "RocketPart.h"
#include <list>
using namespace std;

class FalconRocket : public RocketPart
{
    private:
        string name;
        list<RocketPart*> parts;

    public:
        FalconRocket(string);
        ~FalconRocket();
        void print();
        void add(RocketPart*);
        void remove(RocketPart*);
};
#endif