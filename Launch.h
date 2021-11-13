#ifndef LAUNCH_H
#define LAUNCH_H
#include "Command.h"
using namespace std;

class Launch : public Command
{
    private:

    public:
        Launch(FalconRocket*);
        void execute();
};
#endif