#ifndef CARGO_H
#define CARGO_H

#include "Decorator.h"

using namespace std;

class Cargo : public Decorator
{
public:
    Cargo();
    ~Cargo() {}
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

Cargo::Cargo() : Decorator()
{
    cout << "Adding cargo to the DragonCraft..." << endl;
}

#endif