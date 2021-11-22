#ifndef WASTEDISPOSAL_H
#define WASTEDISPOSAL_H

#include "Decorator.h"

using namespace std;

class WasteDisposal : public Decorator
{
public:
	WasteDisposal();
	~WasteDisposal() {}
	virtual void setDeployFailure(bool failure){};
	virtual void setSystemFailure(bool failure){};
	virtual void setLaunchFailure(bool failure){};
	virtual void setTransportFailure(bool failure){};
	virtual void setDockingFailure(bool failure){};
	virtual bool hasSystemFailure() { return 0; };
	virtual bool hasDeployFailure() { return 0; };
	virtual bool hasLaunchFailure() { return 0; };
	virtual bool hasTransportFailure() { return 0; };
	virtual bool hasDockingFailure() { return 0; };
};

#endif
