#include <string>
#include "DeployState.h"
#include "DragonCraft.h"
#include "State.h"

using namespace std;

DeployState::DeployState() : State("Deploy State")
{
    cout << "Cargo and/or crew boards ISS\n";
}

void DeployState::changeState(DragonCraft *Context)
{
    cout << "Done" << endl;
    Context->setState(nullptr);
}