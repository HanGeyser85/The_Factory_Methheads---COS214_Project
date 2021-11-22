#include "DragonSpacecraftConstruct.h"
#include "DragonCraft.h"
#include "DragonConsturction.h"

using namespace std;

DragonCraft *DragonSpacecraftConstruct::factoryMethod()
{
    cout << "Created a Dragon Spacecraft." << endl;
    return new DragonSpacecraft();
}