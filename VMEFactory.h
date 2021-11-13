#ifndef VMEFACTORY_H
#define VMEFACTORY_H
#include "RocketPartFactory.h"
#include "VacuumMerlinEngine.h"
using namespace std;

class VMEFactory : public RocketPartFactory
{
    private:


    public:
        VMEFactory();
        ~VMEFactory();
        RocketPart* produce();
};
#endif