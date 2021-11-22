#ifndef DOBSERVER_H
#define DOBSERVER_H

#include "DragonCraft.h"
#include <iostream>

using namespace std;

class DObserver
{
public:
    virtual void update() = 0;
    virtual void print() = 0;
};

#endif