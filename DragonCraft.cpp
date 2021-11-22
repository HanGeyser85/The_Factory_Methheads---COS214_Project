#include <string>
#include <vector>
#include "DragonCraft.h"
#include "Decorator.h"
#include "DObserver.h"
#include "State.h"

using namespace std;

void DragonCraft::setCrewNum(int num)
{
    crewNum = num;
}

void DragonCraft::setRocket(RocketPart *r)
{
    rockets = r;
}

DragonCraft::DragonCraft()
{
}

string DragonCraft::getStateType()
{
    return craftState->getStateType();
}

State *DragonCraft::getState()
{
    return craftState;
}

void DragonCraft::setState(State *S)
{
    craftState = S;
}

void DragonCraft::changeState()
{
    craftState->changeState(this);
}