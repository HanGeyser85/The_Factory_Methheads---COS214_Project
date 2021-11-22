#include <string>
#include "SystemsState.h"
#include "TransportState.h"
#include "DragonCraft.h"
#include "State.h"

using namespace std;

TransportState::TransportState() : State("Transport State")
{
    cout << "Transporting spacecraft to launch site."
         << endl;
}

void TransportState::changeState(DragonCraft *Context)
{
    cout << "Going to system state." << endl;
    Context->setState(new SystemsState());
}