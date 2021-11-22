#include "StaticTest.h"
using namespace std;

void StaticTest::execute()
{
    cout << "Commencing STATIC TEST" << endl;
    
    if(this->accessRocket()->hasEngineFault())
        cout << "STATIC TEST failed" << endl;
    else
        cout << "STATIC TEST complete" << endl;
}

StaticTest::StaticTest(FalconRocket* f) : Command(f)
{
    
}