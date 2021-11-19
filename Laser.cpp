#include "Laser.h"
#include <iostream>
using namespace std;

void Laser::notify(Satellite *sat, string msg)
{
    Satellite *next = sat->getNext();
    cout << "Satellite " << sat->getID() << "sends message: " << msg << endl;
    if (next != nullptr)
    {
        next->communicate(msg);
    }
}