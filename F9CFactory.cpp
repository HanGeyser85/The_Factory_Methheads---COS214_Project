#include "F9CFactory.h"
using namespace std;

F9CFactory::F9CFactory()
{

}

F9CFactory::~F9CFactory()
{

}

RocketPart* F9CFactory::produce()
{
    return new Falcon9Core();
}