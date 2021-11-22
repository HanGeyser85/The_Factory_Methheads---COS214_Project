#ifndef ROLL_H
#define ROLL_H
#include "Command.h"
using namespace std;

class ROLL : public Command
{
    private:

    public:
        ROLL(FalconRocket*);
        void execute();
};
#endif