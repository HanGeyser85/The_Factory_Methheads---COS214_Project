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
#include "Satellite.h"
#include "SatelliteFactory.h"
#include "StarlinkFactory.h"
#include "StarlinkSatellite.h"
#include "Communications.h"
#include "Laser.h"
using namespace std;

int main()
{
    const string heavy = "falcon_heavy";
    const string nine = "falcon_nine";

    FalconRocket *falconHeavy = new FalconHeavy("Smol boi", heavy);
    FalconRocket *falconNine = new Falcon9("Star Piercer", nine);
    RocketPartFactory *f9cFactory = new F9CFactory();
    RocketPartFactory *meFactory = new MEFactory();
    RocketPartFactory *vmeFactory = new VMEFactory();

    // Nine
    cout << "Building Falcon9 Rocket \n";
    falconNine->add(f9cFactory->produce());

    Observer* observer = new EngineObserver(falconNine);
    for (int i = 0; i < 9; i++)
    {
        RocketPart* newPart = meFactory->produce();
        newPart->addObserver(observer);
        falconNine->add(newPart);
    }

    cout << "Building Falcon Heavy Rocket \n";

    // Heavy

    Observer* heavyObserver = new EngineObserver(falconHeavy);
    for (int i = 0; i < 3; i++)
        falconHeavy->add(f9cFactory->produce());

    for (int i = 0; i < 27; i++)
    {
        RocketPart* newPart = meFactory->produce();
        newPart->addObserver(heavyObserver);
        falconNine->add(newPart);
    }

    falconHeavy->add(vmeFactory->produce());

    Command *roll = new ROLL(falconHeavy);
    Command *staticTest = new StaticTest(falconHeavy);
    Command *nextStage = new NextStage(falconHeavy);

    Button *rollButton = new Button(roll);
    Button *staticTestButton = new Button(staticTest);
    Button *bigRedButton = new Button(nextStage);


    //Fail static test
    cout << "Commencing static test" << endl;

    cout << "Commencing static test" << endl;
    staticTestButton->hit();

    cout << "Commencing ROLL program \n";
    rollButton->hit();

    cout << "Commencing stage 2 \n";
    bigRedButton->hit();

    // cout << "So this is our final product... Full marks: COMMENCING!!! \n";
    ////////CODE FOR SATELLITE HIERARCHY//////////////////////////
    SatelliteFactory *fact = new StarlinkFactory();

    Satellite **allSats = new Satellite *[60];
    Communications *coms = new Laser();
    allSats[0] = fact->createSatellite();
    allSats[0]->set(coms);

    for (int i = 1; i < 60; i++)
    {
        allSats[i] = allSats[i - 1]->clone();
        allSats[i - 1]->addNextSat(allSats[i]);
        allSats[i]->set(coms);
    }

    coms->notify(allSats[0], "I am spread out!");

    delete fact;
    delete coms;
    delete[] allSats;

    return 0;
}