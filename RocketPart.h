//Component of Composite DP

#ifndef ROCKETPART_H
#define ROCKETPART_H
#include <iostream>
#include <string>

using namespace std;

class RocketPart {

    private:

    public:
        virtual void print() = 0;
        virtual void add(RocketPart*) = 0;
        virtual void remove(RocketPart*) = 0;

};
#endif