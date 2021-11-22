#ifndef STATICTEST_H
#define STATICTEST_H
#include "Command.h"
using namespace std;

class StaticTest : public Command
{
    private:

    public:
        StaticTest(FalconRocket* f);
        void execute();
};
#endif