//Composite of Composite DP

#ifndef FALCONROCKET_H
#define FALCONROCKET_H
#include "RocketPart.h"
using namespace std;

class FalconRocket : public RocketPart
{
    private:
        string name;
        list<RocketPart*> parts;
        bool engineFault;

    public:
        FalconRocket(string);
        ~FalconRocket();
        void print();
        void add(RocketPart*) override;
        void remove(RocketPart*) override;
        bool hasEngineFault();
};
#endif