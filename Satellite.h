#ifndef SATELLITE_H
#define STAELLITE_H

#include <string>
#include "Communications.h"

using namespace std;

class Satellite
{
private:
    Communications *comms;

protected:
    int id;
    Satellite *nextSat;
    Satellite(int);

public:
    Satellite();
    ~Satellite();
    int getID();
    void addNextSat(Satellite *);
    Satellite *getNext();
    void communicate(string);
    virtual Satellite *clone() = 0;
    virtual void set(Communications *) = 0;
    void setComms(Communications*);
};

#endif