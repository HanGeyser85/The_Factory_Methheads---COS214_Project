// Composite of Composite DP

#ifndef FALCONROCKET_H
#define FALCONROCKET_H
#include "RocketPart.h"
#include "Satellite.h"
#include <vector>
using namespace std;
/// This is one of the concrete instanses of RocketPart.
///
/// This is what Falcon9 and FalconHeavy inherit from. 
class FalconRocket : public RocketPart
{
private:
    string name;
    string type;
    bool engineFault;

public:
    vector<RocketPart *> parts;
    FalconRocket(string, string);
    ~FalconRocket();
    void print();
    void add(RocketPart *) override;
    void remove(RocketPart *) override;
    bool hasEngineFault();

        /// @see getType()
        /// @return returns string to let the client determine the name of the Rocket
    string getName();
    string getType();
};
#endif