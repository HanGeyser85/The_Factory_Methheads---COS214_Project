#include "NextStage.h"
using namespace std;

void NextStage::execute()
{
    cout << "Commencing Stage 2" << endl;
    
    //Lose parts like engines perhaps
    if(accessRocket()->getType() == "falcon_heavy")
    {
        //Lose everyting except vacuum merlin engine
        
    }

    if(accessRocket()->getType() == "falcon_nine")
    {
        //Lose everyting except vacuum merlin engine
        
    }
}

NextStage::NextStage(FalconRocket* f) : Command(f)
{
    
}