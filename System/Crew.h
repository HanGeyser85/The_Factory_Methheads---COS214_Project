#ifndef CREW_H
#define CREW_H

#include "Decorator.h"

using namespace std;

class Crew : public Decorator
{
public:
    Crew(int);
    ~Crew() {}
    virtual void setDeployFailure(bool failure){};
    virtual void setSystemFailure(bool failure){};
    virtual void setLaunchFailure(bool failure){};
    virtual void setTransportFailure(bool failure){};
    virtual void setDockingFailure(bool failure){};
    virtual bool hasSystemFailure() { return 0; };
    virtual bool hasDeployFailure() { return 0; };
    virtual bool hasLaunchFailure() { return 0; };
    virtual bool hasTransportFailure() { return 0; };
    virtual bool hasDockingFailure() { return 0; };
};

Crew::Crew(int num) : Decorator()
{
    cout << num << " crew members will be added to the spacecraft..." << endl;
    setCrewNum(num);
}

#endif