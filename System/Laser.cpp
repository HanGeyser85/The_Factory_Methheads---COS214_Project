#include "Laser.h"
#include <iostream>
using namespace std;

Laser::Laser()
{
}

void Laser::notify(Satellite *sat, string msg)
{
    Satellite *next = sat->getNext();
    if (next != nullptr)
    {
        cout << "Satellite " << sat->getID() << " sends message: '" << msg << "' to Satellite " << next->getID() << ".\n";
        next->communicate(msg);
    }
    else
    {
        cout << "Satellite " << sat->getID() << " sends message: '" << msg << "' to ground control.\n";
    }
}