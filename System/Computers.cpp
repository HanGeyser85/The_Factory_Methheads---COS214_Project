#include <iostream>
#include "Computers.h"
#include "Decorator.h"

using namespace std;

Computers::Computers() : Decorator()
{
    cout << "Creating computers to add to the DragonCraft..." << endl;
}