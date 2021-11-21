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
#include <iostream>

using namespace std;

int main()
{
    DragonCraft* DCC;
    DragonCraft* DC;

    DragonConsturction* DCrew = new DragonCrewConstruct();
    DragonConsturction* DSpacecraft = new DragonSpacecraftConstruct();

    cout<<"============================================================"<<endl;
    cout<<"ABSTRACT FACTORY START"<<endl;
    cout<<"============================================================"<<endl;
    cout<<endl;

    DCC = DCrew->factoryMethod();
    DC = DSpacecraft->factoryMethod();

    cout<<"============================================================"<<endl;
    cout<<"ABSTRACT FACTORY END"<<endl;
    cout<<"============================================================"<<endl;
    cout<<endl;

    cout<<"============================================================"<<endl;
    cout<<"DECORATOR START"<<endl;
    cout<<"============================================================"<<endl;
    cout<<endl;
    cout<<"Dragon crew"<<endl;
    DCC->addDecoration(new Door());
    DCC->addDecoration(new WasteDisposal());
    DCC->addDecoration(new Computers());
    cout<<endl;
    cout<<"Dragon Spacecraft"<<endl;
    DC->addDecoration(new Door());
    DC->addDecoration(new WasteDisposal());
    DC->addDecoration(new Computers());

    cout<<"============================================================"<<endl;
    cout<<"DECORATOR END"<<endl;
    cout<<"============================================================"<<endl;
    cout<<endl;

    cout<<"============================================================"<<endl;
    cout<<"STATE START"<<endl;
    cout<<"============================================================"<<endl;
    cout<<endl;

    cout<<"Dragon Crew"<<endl;
    cout<<endl;

    DCC->setState(new TransportState());
    DCC->changeState();
    DCC->changeState();
    DCC->changeState();
    DCC->changeState();
    DCC->changeState();
    cout<<endl;
    cout<<"Dragon Spacecraft"<<endl;
    cout<<endl;
    DC->setState(new TransportState());
    DC->changeState();
    DC->changeState();
    DC->changeState();
    DC->changeState();
    DC->changeState();
    cout<<endl;
    cout<<"============================================================"<<endl;
    cout<<"STATE END"<<endl;
    cout<<"============================================================"<<endl;
    cout<<endl;


    cout<<"============================================================"<<endl;
    cout<<"OBSERVER START"<<endl;
    cout<<"============================================================"<<endl;
    cout<<endl;

    cout<<"Dragon Crew"<<endl;
    cout<<endl;

    
    DObserver* systems = new SystemsObserver(DCC);
    DObserver* deploy = new DeployObserver(DCC);
    DObserver* docking = new DockingObserver(DCC);
    DObserver* launch = new LaunchObserver(DCC);
    DObserver* transport = new TransportObserver(DCC);

    DCC->attach(systems);
    DCC->attach(deploy);
    DCC->attach(docking);
    DCC->attach(launch);
    DCC->attach(transport);

    systems->print();
    deploy->print();
    docking->print(); 
    launch->print(); 
    transport->print();

    DCC->setSystemFailure(true);
    DCC->notify();
    systems->print();

    DCC->setSystemFailure(false);
    DCC->notify();
    systems->print();


    cout<<"Dragon Spacecraft"<<endl;
    cout<<endl;

    DObserver* csystems = new SystemsObserver(DC);
    DObserver* cdeploy = new DeployObserver(DC);
    DObserver* cdocking = new DockingObserver(DC);
    DObserver* claunch = new LaunchObserver(DC);
    DObserver* ctransport = new TransportObserver(DC);

    DC->attach(csystems);
    DC->attach(cdeploy);
    DC->attach(cdocking);
    DC->attach(claunch);
    DC->attach(ctransport);

    csystems->print();
    cdeploy->print();
    cdocking->print(); 
    claunch->print(); 
    ctransport->print();

    DC->setDockingFailure(true);
    DC->setDeployFailure(true);
    DC->notify();
    cdocking->print();
    cdeploy->print();

    DC->setDockingFailure(false);
    DC->setDeployFailure(false);
    DC->notify();
    cdocking->print();
    cdeploy->print();

    cout<<endl;
    cout<<"============================================================"<<endl;
    cout<<"OBSERVER END"<<endl;
    cout<<"============================================================"<<endl;
    cout<<endl;









    return 0;
}

