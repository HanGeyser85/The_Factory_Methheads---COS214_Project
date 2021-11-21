#ifndef DRAGONSPACECRAFT_H
#define DRAGONSPACECRAFT_H

#include "DragonCraft.h"

using namespace std;

class DragonSpacecraft: public DragonCraft
{
	private:
		bool systemFailure;
		bool deployFailure;
		bool launchFailure;
		bool transportFailure;
		bool dockingFailure;

	public:
		virtual void addDecoration(DragonCraft* Dc){};

		DragonSpacecraft() : DragonCraft(){
			systemFailure = false;
			deployFailure = false;
			launchFailure = false;
			transportFailure = false;
			dockingFailure = false;
		}

		~DragonSpacecraft(){
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
