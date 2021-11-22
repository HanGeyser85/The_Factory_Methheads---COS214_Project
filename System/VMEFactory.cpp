#include "VMEFactory.h"
using namespace std;

VMEFactory::VMEFactory()
{

}

VMEFactory::~VMEFactory()
{

}

RocketPart* VMEFactory::produce()
{
    return new VacuumMerlinEngine();
}