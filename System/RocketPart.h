// Component of Composite DP

#ifndef ROCKETPART_H
#define ROCKETPART_H
#include <iostream>
#include <string>
#include <list>
#include "Observer.h"
using namespace std;

class RocketPart
{

private:
    list<Observer *> observerList;

public:
    virtual string getName() = 0;
    virtual void print() = 0;
    virtual void add(RocketPart *) = 0;
    virtual void remove(RocketPart *) = 0;
};
#endif