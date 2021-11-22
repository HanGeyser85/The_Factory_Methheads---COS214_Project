#ifndef FALCON9_H
#define FALCON9_H
#include "FalconRocket.h"
using namespace std;

class Falcon9 : public FalconRocket
{

private:
    vector<Satellite *> StarlinkSats;

public:
    Falcon9(string, string);
    void addSats(vector<Satellite *>);
    ~Falcon9();
};
#endif