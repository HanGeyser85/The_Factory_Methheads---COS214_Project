#include "Falcon9.h"
using namespace std;

Falcon9::Falcon9(string n, string t) : FalconRocket(n, t)
{
}

Falcon9::~Falcon9()
{
}

void Falcon9::addSats(vector<Satellite *> allSats)
{
    StarlinkSats = allSats;
}