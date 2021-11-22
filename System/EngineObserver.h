#ifndef ENGINEOBSERVER_H
#define ENGINEOBSERVER_H
#include "Observer.h"
#include "FalconRocket.h"
using namespace std;

class EngineObserver : public Observer
{
    private:
        FalconRocket* rocket;
        bool engineFault;

    public:
        EngineObserver(FalconRocket*);
        ~EngineObserver();
        void update();
        void print();
};
#endif