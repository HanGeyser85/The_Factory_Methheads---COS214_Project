#ifndef STATICTEST_H
#define STATICTEST_H
#include "Command.h"
using namespace std;
/// This class is used to test the rocket prior to launch, to make sure that everything works perfectly. 
class StaticTest : public Command
{
    private:

    public:
        /// @param f This paramater tells the class which FalconRocket object we want to put through the static test.
        StaticTest(FalconRocket* f);
        void execute();
};
#endif