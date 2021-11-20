//Leaf class in Composite DP

#ifndef FALCON9CORE_H
#define FALCON9CORE_H
#include "RocketPart.h"
using namespace std;

class Falcon9Core : public RocketPart{

    private:

    public:
        string getName();
        void print();
        void add(RocketPart*);
        void remove(RocketPart*);
        Falcon9Core();
        ~Falcon9Core();
};
#endif