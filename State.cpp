#include <string>
#include "State.h"
#include "DragonCraft.h"

using namespace std;

State::State(string ST)
{
    setStateType(ST);
    setoperational(true);
}

void State::setStateType(string StateType)
{
    this->stateType = StateType;
}

string State::getStateType()
{
    return this->stateType;
}

void State::setoperational(bool operational)
{
    this->operational = operational;
}

bool State::getoperational()
{
    return this->operational;
}