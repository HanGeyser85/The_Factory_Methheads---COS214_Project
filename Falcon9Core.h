//Leaf class in Composite DP

#ifndef FALOCN9CORE_H
#define FALCON9CORE_H
#include "RocketPart.h"
using namespace std;

class Falcon9Core : public RocketPart{

    private:

    public:
        Falcon9Core();
        ~Falcon9Core();
        void print();
};
#endif