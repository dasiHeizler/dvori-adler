
#pragma once
#include "baseMessage.h"
#include <stdlib.h>
#include "statusMessage.h"
#include "discoverMessage.h"
#include "Camera.h"
class Simulator
{
protected:
	Camera* simulator[10];
public:
	statusMessage* createStatusMessage();
	discoverMessage* createDiscoverMessage();
	void generateAndSendMessage();
};


