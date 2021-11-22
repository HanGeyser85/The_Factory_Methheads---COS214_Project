#include "DragonCrewConstruct.h"
#include "DragonCraft.h"
#include "DragonConsturction.h"

using namespace std;

DragonCraft *DragonCrewConstruct::factoryMethod()
{
    cout << "Created a Dragon Crew Spacecraft." << endl;
    return new DragonCrew();
}