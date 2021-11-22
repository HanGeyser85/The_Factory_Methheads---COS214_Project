#include <string>
#include "LaunchState.h"
#include "SystemsState.h"
#include "DragonCraft.h"
#include "State.h"

using namespace std;

SystemsState::SystemsState() : State("System State")
{
    cout << "Checking systems...\n";
}

void SystemsState::changeState(DragonCraft *Context)
{
    cout << "\nGoing to launch state." << endl;
    Context->setState(new LaunchState());
}