#include <string>
#include "DeployState.h"
#include "DockingState.h"
#include "DragonCraft.h"
#include "State.h"

using namespace std;

DockingState::DockingState() : State("Docking State")
{
    cout << "The spacecraft is docking with the ISS\n";
}

void DockingState::changeState(DragonCraft *Context)
{
    cout << "\nGoing to deploy state." << endl;
    Context->setState(new DeployState());
}