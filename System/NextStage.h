#ifndef NEXTSTAGE_H
#define NEXTSTAGE_H
#include "Command.h"
#include "FalconRocket.h"
using namespace std;
/// This class is responsible to transform the rocket from Stage 1 to Stage 2.
///
/// It also handles all the methods that this process entails, like the dropping of engines.
class NextStage : public Command
{
    private:

    public:
        /// @param f This paramater tells the class which FalconRocket object we want to take through to the next stage.
        NextStage(FalconRocket* f);
        void execute();
};
#endif