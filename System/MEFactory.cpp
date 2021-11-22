#include "MEFactory.h"
using namespace std;

MEFactory::MEFactory()
{

}

MEFactory::~MEFactory()
{

}

RocketPart* MEFactory::produce()
{
    return new MerlinEngine();
}