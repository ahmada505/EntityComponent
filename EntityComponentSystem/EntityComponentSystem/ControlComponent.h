#pragma once
#include "Component.h"

class ControlComponent
{
public:
	ControlComponent() {}

	COMPONENTTYPE getType() { return type; }
private:

	COMPONENTTYPE type = COMPONENTTYPE::CONTROL;
};

