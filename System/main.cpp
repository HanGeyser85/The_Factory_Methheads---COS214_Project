#include "Computers.h"
#include "Decorator.h"
#include "DeployObserver.h"
#include "DeployState.h"
#include "DockingObserver.h"
#include "DockingState.h"
#include "Door.h"
#include "DragonConsturction.h"
#include "DragonCraft.h"
#include "DragonCrew.h"
#include "DragonCrewConstruct.h"
#include "DragonSpacecraft.h"
#include "DragonSpacecraftConstruct.h"
#include "LaunchObserver.h"
#include "LaunchState.h"
#include "State.h"
#include "SystemsObserver.h"
#include "SystemsState.h"
#include "TransportObserver.h"
#include "TransportState.h"
#include "WasteDisposal.h"
#include "DObserver.h"
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
#include "Cargo.h"
#include "Rocket.h"
#include "Crew.h"
using namespace std;

bool simulate()
{
    const string heavy = "falcon_heavy";
    const string nine = "falcon_nine";
    int sC;
    char ans;
    do
    {
        DragonCraft *spaceCraft;
        FalconRocket *rocket;
        cout << "Welcome to the Tesla Launch simulator! ♥\nIf you wish to restart the simulation at any time, enter 9\nWhich simulation would you like to run?\n";
        cout << "1-Spacecraft launch\n2-Satellite launch\nEnter the number here: ";
        cin >> sC;
        cout << endl;

        if(sC == 9)
            break;

        if (sC == 1)
        {
            cout << "Which spacecraft would you like to create?\n";
            cout << "1-The Crew Dragon\n2-The Dragon Spacecraft\nEnter the number here: ";
            cin >> sC;
            cout << endl;
            DragonConsturction *constructor;

            if(sC == 9)
                break;
                
            if (sC == 1)
            {
                constructor = new DragonCrewConstruct();
                spaceCraft = constructor->factoryMethod();
                cout << "Do you want to add crew to the spacecraft? (Y/N)\n";
                cin >> ans;
                if(ans == '9')
                    break;
                if (ans == 'Y')
                {
                    cout << "How many crew members will be aboard the spacecraft?\nEnter the number here: ";
                    cin >> sC;
                    spaceCraft->addDecoration(new Crew(sC));
                }
            }
            else
            {
                constructor = new DragonSpacecraftConstruct();
                spaceCraft = constructor->factoryMethod();
            }

            cout << "Do you want to add 🚗go? (Y/N)\n";
            cin >> ans;
            if(ans == '9')
                break;

            if (ans == 'Y')
            {
                spaceCraft->addDecoration(new Cargo());
            }
            cout << "\nFinishing construction of spacecraft...\n";
            spaceCraft->addDecoration(new Door());
            spaceCraft->addDecoration(new WasteDisposal());
            spaceCraft->addDecoration(new Computers());
            cout << "Spacecraft construction complete!\n";

            cout << "\nWhich rocket would you like to add to the spacecraft?\n";
            cout << "1-Falcon 9\n2-Falcon Heavy\nEnter the number here: ";
            cin >> sC;

            if(sC == 9)
                break;
            if (sC == 1)
            {
                rocket = new Falcon9("Star Piercer", nine);
                RocketPartFactory *f9cFactory = new F9CFactory();
                RocketPartFactory *meFactory = new MEFactory();
                RocketPartFactory *vmeFactory = new VMEFactory();

                cout << "Building Falcon9 Rocket \n";
                rocket->add(f9cFactory->produce());
                cout << "Falcon 9 cores added!\n";

                for (int i = 0; i < 9; i++)
                    rocket->add(meFactory->produce());
                cout << "Merlin engines added!\n";

                rocket->add(vmeFactory->produce());
                cout << "Vacuum Merlin engine added!\n";
            }
            else
            {
                rocket = new FalconHeavy("Dik Frik", heavy);
                RocketPartFactory *f9cFactory = new F9CFactory();
                RocketPartFactory *meFactory = new MEFactory();
                RocketPartFactory *vmeFactory = new VMEFactory();

                cout << "Building Falcon Heavy Rocket \n";
                for (int i = 0; i < 3; i++)
                    rocket->add(f9cFactory->produce());
                cout << "Falcon 9 cores added!\n";

                for (int i = 0; i < 27; i++)
                    rocket->add(meFactory->produce());
                cout << "Merlin engines added!\n";

                rocket->add(vmeFactory->produce());
                cout << "Vacuum Merlin engine added!\n";
            }
            cout << "Construction of rocket complete!\n";
            spaceCraft->addDecoration(new Rocket(rocket));
            cout << endl;

            Command *roll = new ROLL(rocket);
            Command *staticTest = new StaticTest(rocket);
            Command *nextStage = new NextStage(rocket);

            Button *rollButton = new Button(roll);
            Button *staticTestButton = new Button(staticTest);
            Button *bigRedButton = new Button(nextStage);

            DObserver *systems = new SystemsObserver(spaceCraft);
            DObserver *deploy = new DeployObserver(spaceCraft);
            DObserver *docking = new DockingObserver(spaceCraft);
            DObserver *launch = new LaunchObserver(spaceCraft);
            DObserver *transport = new TransportObserver(spaceCraft);

            spaceCraft->attach(systems);
            spaceCraft->attach(deploy);
            spaceCraft->attach(docking);
            spaceCraft->attach(launch);
            spaceCraft->attach(transport);

            cout << "Simulate a failure? Y/N" << endl;
            cin >> ans;

            if(ans == 'Y')
            {
                cout << "Which failure would you like to simulate?\n1. Deploy Failure\n2. Docking Failure\n3. Launch Failure\n4. System Failure";
                cin >> ans;
                switch(ans)
                {
                    case '1':
                        spaceCraft->setDeployFailure(true);
                        break;
                    case '2':
                        spaceCraft->setDockingFailure(true);
                        break;
                    case '3':
                        spaceCraft->setLaunchFailure(true);
                        break;
                    case '4':
                        spaceCraft->setSystemFailure(true);
                        break;
                }
                spaceCraft->notify();
            }

            transport->print();
            spaceCraft->setState(new TransportState()); // transporting
            launch->print();
            spaceCraft->changeState(); // checking systems
            systems->print();
            staticTestButton->hit();
            spaceCraft->changeState(); // launching
            cout << "Commencing ROLL program \n";
            rollButton->hit();
            bigRedButton->hit();
            spaceCraft->changeState(); // docking
            docking->print();
            spaceCraft->changeState(); // deploy
            deploy->print();
            spaceCraft->changeState(); // end
            cout << "\nEnding Spacecraft Launch simulation...\nWould you like to simulate again?\n";
            cout << "1-Yes\n2-No\nEnter number here: ";
            cin >> sC;
        }
        else
        {
            Falcon9 *rocket = new Falcon9("Starlink Rocket", nine);
            RocketPartFactory *f9cFactory = new F9CFactory();
            RocketPartFactory *meFactory = new MEFactory();
            RocketPartFactory *vmeFactory = new VMEFactory();

            cout << "Creating Falcon 9 rocket for Starlink launch.\n";
            rocket->add(f9cFactory->produce());
            cout << "Falcon 9 cores added!\n";

            for (int i = 0; i < 9; i++)
                rocket->add(meFactory->produce());
            cout << "Merlin engins added!\n";

            rocket->add(vmeFactory->produce());
            cout << "Vacuum Merlin engine added!\n";
            cout << "Construction of rocket complete!\nThe Starlink Satellites will now be added to the rocket.\n";
            SatelliteFactory *fact = new StarlinkFactory();

            vector<Satellite *> allSats;
            Communications *coms = new Laser();
            allSats.push_back(fact->createSatellite());
            allSats[0]->set(coms);

            for (int i = 1; i < 60; i++)
            {
                allSats.push_back(allSats[i - 1]->clone());
                allSats[i - 1]->addNextSat(allSats[i]);
                allSats[i]->set(coms);
            }

            rocket->addSats(allSats);
            cout << "Satellites added to rocket!\n";

            Command *roll = new ROLL(rocket);
            Command *staticTest = new StaticTest(rocket);
            Command *nextStage = new NextStage(rocket);

            Button *rollButton = new Button(roll);
            Button *staticTestButton = new Button(staticTest);
            Button *bigRedButton = new Button(nextStage);

            staticTestButton->hit();

            cout << "Commencing ROLL program \n";
            rollButton->hit();

            bigRedButton->hit();

            cout << "Deploying Starlink Satellites!\n";
            cout << "Testing communication between satellites...\n";
            coms->notify(allSats[0], "I am spread out!");
            cout << "Communication successful!\n";
            cout << "Ending Satellite Launch simulation...\nWould you like to simulate again?\n";
            cout << "1-Yes\n2-No\nEnter number here: ";
            cin >> sC;
        }

    } while (sC == 1);

    if(sC == 2)
        return 0;
    return (sC == 9 || ans == '9');
}

int main()
{
    
    while(simulate())
    {

    }

    // // cout << "So this is our final product... Full marks: COMMENCING!!! \n";
    // DragonCraft *DCC;
    // DragonCraft *DC;

    // DragonConsturction *DCrew = new DragonCrewConstruct();
    // DragonConsturction *DSpacecraft = new DragonSpacecraftConstruct();

    // cout << "============================================================" << endl;
    // cout << "ABSTRACT FACTORY START" << endl;
    // cout << "============================================================" << endl;
    // cout << endl;

    // DCC = DCrew->factoryMethod();
    // DC = DSpacecraft->factoryMethod();

    // cout << "============================================================" << endl;
    // cout << "ABSTRACT FACTORY END" << endl;
    // cout << "============================================================" << endl;
    // cout << endl;

    // cout << "============================================================" << endl;
    // cout << "DECORATOR START" << endl;
    // cout << "============================================================" << endl;
    // cout << endl;

    // SatelliteFactory *fact = new StarlinkFactory();

    // vector<Satellite *> allSats;
    // Communications *coms = new Laser();
    // allSats.push_back(fact->createSatellite());
    // allSats[0]->set(coms);

    // for (int i = 1; i < 60; i++)
    // {
    //     allSats.push_back(allSats[i - 1]->clone());
    //     allSats[i - 1]->addNextSat(allSats[i]);
    //     allSats[i]->set(coms);
    // }

    // // coms->notify(allSats[0], "Spreading out!");

    // cout << "Dragon crew" << endl;
    // // DCC->addDecoration(new Rocket(falconHeavy));
    // DCC->addDecoration(new Door());
    // DCC->addDecoration(new WasteDisposal());
    // DCC->addDecoration(new Computers());
    // // DCC->addDecoration(new Cargo(allSats));
    // cout << endl;
    // cout << "Dragon Spacecraft" << endl;
    // // DC->addDecoration(new Rocket(falconNine));
    // DC->addDecoration(new Door());
    // DC->addDecoration(new WasteDisposal());
    // DC->addDecoration(new Computers());
    // // DC->addDecoration(new Cargo(allSats));

    // cout << "============================================================" << endl;
    // cout << "DECORATOR END" << endl;
    // cout << "============================================================" << endl;
    // cout << endl;

    // cout << "============================================================" << endl;
    // cout << "STATE START" << endl;
    // cout << "============================================================" << endl;
    // cout << endl;

    // cout << "Dragon Crew" << endl;
    // cout << endl;

    // DCC->setState(new TransportState());
    // DCC->changeState();
    // DCC->changeState();
    // DCC->changeState();
    // DCC->changeState();
    // DCC->changeState();
    // cout << endl;
    // cout << "Dragon Spacecraft" << endl;
    // cout << endl;
    // DC->setState(new TransportState());
    // DC->changeState();
    // DC->changeState();
    // DC->changeState();
    // DC->changeState();
    // DC->changeState();
    // cout << endl;
    // cout << "============================================================" << endl;
    // cout << "STATE END" << endl;
    // cout << "============================================================" << endl;
    // cout << endl;

    // cout << "============================================================" << endl;
    // cout << "OBSERVER START" << endl;
    // cout << "============================================================" << endl;
    // cout << endl;

    // cout << "Dragon Crew" << endl;
    // cout << endl;

    // DObserver *systems = new SystemsObserver(DCC);
    // DObserver *deploy = new DeployObserver(DCC);
    // DObserver *docking = new DockingObserver(DCC);
    // DObserver *launch = new LaunchObserver(DCC);
    // DObserver *transport = new TransportObserver(DCC);

    // DCC->attach(systems);
    // DCC->attach(deploy);
    // DCC->attach(docking);
    // DCC->attach(launch);
    // DCC->attach(transport);

    // systems->print();
    // deploy->print();
    // docking->print();
    // launch->print();
    // transport->print();

    // DCC->setSystemFailure(true);
    // DCC->notify();
    // systems->print();

    // DCC->setSystemFailure(false);
    // DCC->notify();
    // systems->print();

    // cout << "Dragon Spacecraft" << endl;
    // cout << endl;

    // DObserver *csystems = new SystemsObserver(DC);
    // DObserver *cdeploy = new DeployObserver(DC);
    // DObserver *cdocking = new DockingObserver(DC);
    // DObserver *claunch = new LaunchObserver(DC);
    // DObserver *ctransport = new TransportObserver(DC);

    // DC->attach(csystems);
    // DC->attach(cdeploy);
    // DC->attach(cdocking);
    // DC->attach(claunch);
    // DC->attach(ctransport);

    // csystems->print();
    // cdeploy->print();
    // cdocking->print();
    // claunch->print();
    // ctransport->print();

    // DC->setDockingFailure(true);
    // DC->setDeployFailure(true);
    // DC->notify();
    // cdocking->print();
    // cdeploy->print();

    // DC->setDockingFailure(false);
    // DC->setDeployFailure(false);
    // DC->notify();
    // cdocking->print();
    // cdeploy->print();

    // cout << endl;
    // cout << "============================================================" << endl;
    // cout << "OBSERVER END" << endl;
    // cout << "============================================================" << endl;
    // cout << endl;

    return 0;
}