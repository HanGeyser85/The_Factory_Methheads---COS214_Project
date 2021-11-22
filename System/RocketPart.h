// Component of Composite DP

#ifndef ROCKETPART_H
#define ROCKETPART_H
#include <iostream>
#include <string>
#include <list>
#include "Observer.h"
using namespace std;

/// This is the base class where all different components of RocktParts will inherit from.
///
/// This is an abstact class which contain only pure virtual functions.

class RocketPart
{

private:
    list<Observer *> observerList;

public:
    virtual string getName() = 0;
    virtual void print() = 0;
    
    /// @param r This paramater tells the class which RocketPart object we want to add to the rocket.
    /// @see remove(RocketPart*)
    /// @return returns void
    virtual void add(RocketPart* r) = 0;
    virtual void remove(RocketPart *) = 0;
};
#endif