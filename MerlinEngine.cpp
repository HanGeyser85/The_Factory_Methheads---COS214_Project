#include "MerlinEngine.h"
using namespace std;

MerlinEngine::MerlinEngine()
{

}

MerlinEngine::~MerlinEngine()
{

}

void MerlinEngine::print()
{
    cout << "Merlin Engine";
}

string MerlinEngine::getName() { return "Merlin Engine"; }

void MerlinEngine::add(RocketPart* r) {}

void MerlinEngine::remove(RocketPart* r) {}