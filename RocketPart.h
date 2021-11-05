//Component of Composite DP

#ifndef ROCKETPART_H
#define ROCKETPART_H
#include <iostream>
#include <string>

using namespace std;

class RocketPart {

    private:
        
    public:
        virtual void add(RocketPart*);
        virtual void remove(RocketPart*);

};
#endif