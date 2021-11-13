#include "ROLL.h"

using namespace std;

void ROLL::execute() {
    cout << "Transitioning from Phase 1 to Phase 2 with ROLL.\n";
}

ROLL::ROLL(FalconRocket* f) : Command(f)
{

}