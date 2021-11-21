#include "NextStage.h"
using namespace std;

void NextStage::execute()
{
    cout << "Busy moving to Stage 2" << endl;

    int size = accessRocket()->parts.size();
    bool removed = false;
    // Lose parts like engines perhaps
    if (accessRocket()->getType() == "falcon_heavy")
    {
        // Lose everyting except vacuum merlin engine
        for (int i = 0; i < size; i++)
        {
            if (removed)
            {
                removed = false;
                i--;
            }

            RocketPart *r = accessRocket()->parts[i];
            string typeVal = r->getName();
            if (typeVal != "Vacuum Merlin Engine")
            {
                accessRocket()->remove(r);
                removed = true;
            }
        }
    }

    if (accessRocket()->getType() == "falcon_nine")
    {
        // Lose everyting except vacuum merlin engine
        for (int i = 0; i < size; i++)
        {
            if (removed)
            {
                removed = false;
                i--;
            }

            RocketPart *r = accessRocket()->parts[i];
            string typeVal = r->getName();
            if (typeVal != "Vacuum Merlin Engine")
            {
                accessRocket()->remove(r);
            }
        }
    }
}

NextStage::NextStage(FalconRocket *f) : Command(f)
{
}