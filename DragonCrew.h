#ifndef DRAGONCREW_H
#define DRAGONCREW_H

#include <exception>
#include "DragonCraft.h"

using namespace std;

class DragonCrew: public DragonCraft
{
	private:
		bool systemFailure;
		bool deployFailure;
		bool launchFailure;
		bool transportFailure;
		bool dockingFailure;

	public: 
		virtual void addDecoration(DragonCraft* Dc){};

		DragonCrew() : DragonCraft(){
			systemFailure = false;
			deployFailure = false;
			launchFailure = false;
			transportFailure = false;
			dockingFailure = false;
		}

		~DragonCrew(){
			systemFailure = false;
			deployFailure = false;
			launchFailure = false;
			transportFailure = false;
			dockingFailure = false;
		};

		void setDeployFailure(bool failure){
			deployFailure = failure;
		}

		void setSystemFailure(bool failure){
			systemFailure = failure;
		}

		void setLaunchFailure(bool failure){
			launchFailure = failure;
		}

		void setTransportFailure(bool failure){
			transportFailure = failure;
		}

		void setDockingFailure(bool failure){
			dockingFailure = failure;
		}

		bool hasSystemFailure(){
			return systemFailure;
		}

		bool hasDeployFailure(){
			return deployFailure;
		}

		bool hasLaunchFailure(){
			return launchFailure;
		}

		bool hasTransportFailure(){
			return transportFailure;
		}

		bool hasDockingFailure(){
			return dockingFailure;
		}
};

#endif
