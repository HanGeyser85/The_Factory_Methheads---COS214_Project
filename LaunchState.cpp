#include <string>
#include "DockingState.h"
#include "LaunchState.h"
#include "DragonCraft.h"
#include "State.h"

using namespace std;

LaunchState::LaunchState() : State("Launch State")
{
    cout << "The spacecraft is launching into space!\n";
}

void LaunchState::changeState(DragonCraft *Context)
{
    cout << "\nGoing to docking state." << endl;
    Context->setState(new DockingState());
}