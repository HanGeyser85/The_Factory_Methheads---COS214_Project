//Leaf class in Composite DP

#ifndef MERLINENGINE_H
#define MERLINENGINE_H
#include "RocketPart.h"
using namespace std;

class MerlinEngine : public RocketPart {
    
    private:

    public:
        string getName();
        void add(RocketPart*);
        void remove(RocketPart*);
        MerlinEngine();
        ~MerlinEngine();
        void print();
        void addObserver(Observer*){};

};
#endif