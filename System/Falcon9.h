#ifndef FALCON9_H
#define FALCON9_H
#include "FalconRocket.h"
using namespace std;
/// One of the conrete rockets that will be launched. 
///
/// Inherits from FalconRocket.
class Falcon9 : public FalconRocket
{

private:
    vector<Satellite *> StarlinkSats;

public:
    Falcon9(string, string);

        /// @param s This paramater tells the class which vector of satellites we want to add to the Falcon9 rocket.
        /// @return returns void
    void addSats(vector<Satellite*> s);
    ~Falcon9();
};
#endif