#pragma once
#include "Entity.h"
#include "System.h"
class ControlSystem : public System
{
public:
	ControlSystem();
	~ControlSystem();
	void Update();
private:
};