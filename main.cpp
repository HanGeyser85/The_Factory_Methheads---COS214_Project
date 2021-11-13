#include "Button.h"
#include "EngineObserver.h"
#include "F9CFactory.h"
#include "Falcon9Core.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "Launch.h"
#include "MEFactory.h"
#include "MerlinEngine.h"
#include "NextStage.h"
#include "MerlinEngine.h"
#include "RocketPart.h"
#include "ROLL.h"
#include "StaticTest.h"
#include "VacuumMerlinEngine.h"
#include "VMEFactory.h"
using namespace std;

int main()
{
    FalconRocket* falconHeavy = new FalconHeavy();
    Command* roll = new ROLL(falconHeavy);
    Command* staticTest = new StaticTest(falconHeavy);
    Command* nextStage = new NextStage(falconHeavy);

    Button* rollButton = new Button(roll);

    return 0;
}