//Composite of Composite DP

#ifndef FALCONROCKET_H
#define FALCONROCKET_H
#include "RocketPart.h"
#include <vector>
using namespace std;

class FalconRocket : public RocketPart
{
    private:
        string name;
        string type;
        // list<RocketPart*> parts;
        bool engineFault;

    public:
        vector<RocketPart*> parts;
        FalconRocket(string, string);
        ~FalconRocket();
        void print();
        void add(RocketPart*) override;
        void remove(RocketPart*) override;
        bool hasEngineFault();
        string getName();
        string getType();

};
#endif