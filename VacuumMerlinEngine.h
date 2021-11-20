//Leaf class in Composite DP

#ifndef VACUUMMERLINENGINE_H
#define VACUUMMERLINENGINE_H
#include "RocketPart.h"
using namespace std;

class VacuumMerlinEngine : public RocketPart
{
    private:

    public:
        VacuumMerlinEngine();
        ~VacuumMerlinEngine();
        void print();
        string getName();
};
#endif