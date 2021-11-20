#include "NextStage.h"
using namespace std;

void NextStage::execute()
{
    cout << "Busy moving to Stage 2" << endl;
    
    //Lose parts like engines perhaps
    if(accessRocket()->getType() == "falcon_heavy") {
        //Lose everyting except vacuum merlin engine
        for (int i = 0; i < accessRocket()->parts.size(); i++) {
            RocketPart* r = accessRocket()->parts[i];
        // for (RocketPart* r : accessRocket()->parts) {
            string typeVal = r->getName();
            cout << "Name: " + typeVal << endl;
            if (typeVal != "Vacuum Merlin Engine") {
                accessRocket()->remove(r);
                cout << "Remove done in loop\n";
            }
        } 

        for (int i = 0; i < accessRocket()->parts.size(); i++) {
            cout << i << endl;
            if (accessRocket()->parts[i] != NULL) {
                cout << i << endl;
                cout << accessRocket()->parts[i]->getName() << endl;
            }
        }
    }

    cout << "remaining: " << accessRocket()->parts.size();

    cout << "In stage 2??? - MID \n";

    if (accessRocket()->getType() == "falcon_nine") {
        //Lose everyting except vacuum merlin engine
        for (RocketPart* r : accessRocket()->parts) {
            string typeVal = r->getName();
            if (typeVal != "Vacuum Merlin Engine") {
                accessRocket()->remove(r);
            }
        } 
    }

    cout << "In stage 2???\n";
}

NextStage::NextStage(FalconRocket* f) : Command(f) {
    
}