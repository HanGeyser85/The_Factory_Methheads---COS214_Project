#include <iostream>
#include "Door.h"
#include "Decorator.h"

using namespace std;

Door::Door() : Decorator()
{
    cout << "Creating door/s to add to the DragonCraft..." << endl;
}