#include "FalconRocket.h"
using namespace std;

FalconRocket::FalconRocket(string n, string t) : name(n), type(t)
{
    engineFault = false;

    // if n == Falcon9
    // this->add( factory->makeMerlinEngine()) x 7
}

FalconRocket::~FalconRocket()
{
}

void FalconRocket::print()
{
    cout << this->name << ":" << endl;
    for (RocketPart *r : parts)
    {
        r->print();
    }
    cout << endl;
}

void FalconRocket::add(RocketPart *rp)
{
    parts.push_back(rp);
}

void FalconRocket::remove(RocketPart *rp)
{
    // parts.pop_back();

    vector<RocketPart *>::iterator it;
    for (it = parts.begin(); it != parts.end(); ++it)
    {
        if (*it == rp)
            parts.erase(it);
    }
}

bool FalconRocket::hasEngineFault()
{
    return this->engineFault;
}

string FalconRocket::getName()
{
    return name;
}

string FalconRocket::getType()
{
    return type;
}

void FalconRocket::addObserver(Observer* o)
{
    this->observerList.push_back(o);
}