#include "Rocket.h"
#include <iostream>

using namespace std;
Rocket::Rocket(RocketPart *r) : Decorator()
{
    cout << "Adding rocket to spacecraft...\n";
    setRocket(r);
}