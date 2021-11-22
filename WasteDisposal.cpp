#include <iostream>
#include "WasteDisposal.h"
#include "Decorator.h"

using namespace std;

WasteDisposal::WasteDisposal() : Decorator()
{
    cout << "A waste disposal system is created for the DragonCraft..." << endl;
}