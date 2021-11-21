#ifndef COMMUNICATIONS_H
#define COMMUNICATIONS_H

#include <string>
#include "Satellite.h"

using namespace std;

class Satellite;
class Communications
{
public:
    Communications();
    virtual void notify(Satellite *, string);
};

#endif