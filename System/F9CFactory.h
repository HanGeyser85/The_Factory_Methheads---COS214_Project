#ifndef F9CFACTORY_H
#define F9CFACTORY_H
#include "RocketPartFactory.h"
#include "Falcon9Core.h"
using namespace std;

class F9CFactory : public RocketPartFactory
{
    private:

    public:
        F9CFactory();
        ~F9CFactory();
        RocketPart* produce();
};
#endif