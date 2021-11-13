#ifndef MEFACTORY_H
#define MEFACTORY_H
#include "RocketPartFactory.h"
#include "MerlinEngine.h"
using namespace std;

class MEFactory : public RocketPartFactory {

    private:

    public:
        MEFactory();
        ~MEFactory();
        RocketPart* produce();
};
#endif