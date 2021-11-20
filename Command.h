#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include "FalconRocket.h"
using namespace std;

class Command {
    private:
        FalconRocket* rocket;
    
    public:
        Command(FalconRocket*);
        virtual void execute() = 0;
        FalconRocket* accessRocket() { return rocket; };
};
#endif