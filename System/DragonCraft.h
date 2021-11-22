#ifndef DRAGONCRAFT_H
#define DRAGONCRAFT_H

#include <string>
#include <vector>
#include "DObserver.h"
#include "State.h"
#include "Satellite.h"
#include "RocketPart.h"

using namespace std;
class State;
/// Another base class of a type of rocket which will be launched.
///
/// DragonSpacecraft inherits from this class.
class DragonCraft
{
private:
	vector<DObserver *> observerList;
	State *craftState;
	RocketPart *rockets;
	int crewNum;

public:
	DragonCraft();
	string getStateType();
	State *getState();
	void setCrewNum(int);
	void setState(State *S);
	vector<Satellite *> getSatlist();

	/// @param r This paramater tells the class which RocketPart we wamt to add to the DragonCraft class
	/// @see addDecoration(DragonCraft *Dc) = 0;
	/// @return returns void
	void setRocket(RocketPart *r);
	void changeState();
	virtual void addDecoration(DragonCraft *Dc) = 0;
	virtual ~DragonCraft(){};
	virtual void setDeployFailure(bool failure) = 0;
	virtual void setSystemFailure(bool failure) = 0;
	virtual void setLaunchFailure(bool failure) = 0;
	virtual void setTransportFailure(bool failure) = 0;
	virtual void setDockingFailure(bool failure) = 0;
	virtual bool hasSystemFailure() = 0;
	virtual bool hasDeployFailure() = 0;
	virtual bool hasLaunchFailure() = 0;
	virtual bool hasTransportFailure() = 0;
	virtual bool hasDockingFailure() = 0;

	void attach(DObserver *observer)
	{
		observerList.push_back(observer);
	}

	void detach(DObserver *observer)
	{
		for (int i = 0; i < observerList.size(); i++)
		{
			if (observerList[i] == observer)
				observerList.erase(observerList.begin() + i);
		}
	}

	void notify()
	{
		for (int i = 0; i < observerList.size(); i++)
			observerList[i]->update();
	}
};

#endif
