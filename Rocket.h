#ifndef ROCKET_H
#define ROCKET_H

#include "Decorator.h"
#include "RocketPart.h"

class Rocket : public Decorator
{
public:
    Rocket(RocketPart *);
    virtual void setDeployFailure(bool failure){};
    virtual void setSystemFailure(bool failure){};
    virtual void setLaunchFailure(bool failure){};
    virtual void setTransportFailure(bool failure){};
    virtual void setDockingFailure(bool failure){};
    virtual bool hasSystemFailure() { return 0; };
    virtual bool hasDeployFailure() { return 0; };
    virtual bool hasLaunchFailure() { return 0; };
    virtual bool hasTransportFailure() { return 0; };
    virtual bool hasDockingFailure() { return 0; };
};

#endif