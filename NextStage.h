#ifndef NEXTSTAGE_H
#define NEXTSTAGE_H
#include "Command.h"
using namespace std;

class NextStage : public Command
{
    private:

    public:
        NextStage(FalconRocket*);
        void execute();
};
#endif