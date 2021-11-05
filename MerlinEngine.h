//Leaf class in Composite DP

#ifndef MERLINENGINE_H
#define MERLINENGINE_H
#include "RocketPart.h"
using namespace std;

class MerlinEngine : public RocketPart{
    
    private:

    public:
        MerlinEngine();
        ~MerlinEngine();
        void print();
};
#endif