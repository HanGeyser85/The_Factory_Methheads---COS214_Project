#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H
#include "FalconRocket.h"
using namespace std;
/// One of the conrete rockets that will be launched. 
///
/// Inherits from FalconRocket.
class FalconHeavy : public FalconRocket
{

    private:

    public:
        FalconHeavy(string, string);
        ~FalconHeavy();
};
#endif