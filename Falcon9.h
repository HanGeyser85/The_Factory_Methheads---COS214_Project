#ifndef FALCON9_H
#define FALCON9_H
#include "FalconRocket.h"
using namespace std;

class Falcon9 : public FalconRocket
{

    private:

    public:
        Falcon9(string, string);
        ~Falcon9();
};
#endif