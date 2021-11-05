#include "FalconRocket.h"
using namespace std;

FalconRocket::FalconRocket(string n) : name(n)
{
    //if n == Falcon9   
    //this->add( factory->makeMerlinEngine()) x 7
}

FalconRocket::~FalconRocket()
{

}

void FalconRocket::print()
{
    cout << this->name << ":" << endl;
    for(RocketPart* r : parts)
    {
        r->print();
    }
    cout << endl;
}

void FalconRocket::add(RocketPart* rp)
{
    parts.push_back(rp);
}

void FalconRocket::remove(RocketPart* rp)
{
    parts.remove(rp);
}