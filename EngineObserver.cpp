#include "EngineObserver.h"

using namespace std;

EngineObserver::EngineObserver(FalconRocket* falcon)
{
    this->rocket = falcon;
}

EngineObserver::~EngineObserver()
{
    this->rocket = NULL;
}

void EngineObserver::update()
{
    if(this->rocket->hasEngineFault())
        this->engineFault = true;
    else
        this->engineFault = false;
}

void EngineObserver::print()
{
    if(engineFault)
        cout << "Engine fault occurred" << endl;
    else
        cout << "No engine fault as of yet" << endl;
}