#ifndef DRAGONCRAFT_H
#define DRAGONCRAFT_H

#include <string>
#include <vector>
#include "Decorator.h"
#include "DObserver.h"
#include "State.h"

using namespace std;

class DragonCraft
{
	private:
		vector<DObserver*> observerList;
		State* craftState;

	public:
		DragonCraft();
		string getStateType();
		State* getState();
		void setState(State* S);
		void changeState();
		virtual void addDecoration(DragonCraft* Dc) = 0;
		virtual ~DragonCraft(){};
		virtual void setDeployFailure(bool failure) =0;
		virtual void setSystemFailure(bool failure) =0;
		virtual void setLaunchFailure(bool failure) =0;
		virtual void setTransportFailure(bool failure) =0;
		virtual void setDockingFailure(bool failure) =0;
		virtual bool hasSystemFailure() =0;
		virtual bool hasDeployFailure() =0;
		virtual bool hasLaunchFailure() =0;
		virtual bool hasTransportFailure() =0;
		virtual bool hasDockingFailure() =0;

		void attach(DObserver* observer){
			observerList.push_back(observer);
		}

		void detach(DObserver* observer){
			for(int i=0; i<observerList.size(); i++){
				if(observerList[i] == observer)
					observerList.erase(observerList.begin()+i);
			}
		}

		void notify(){
			for(int i=0; i<observerList.size(); i++)
				observerList[i]->update();
		}
};

DragonCraft::DragonCraft() {
}

string DragonCraft::getStateType() {
	return craftState->getStateType();
}

State* DragonCraft::getState() {
	return craftState;
}

void DragonCraft::setState(State* S) {
	craftState = S;
}

void DragonCraft::changeState() {
	craftState->changeState(this);
}

#endif
