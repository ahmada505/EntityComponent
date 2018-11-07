#pragma once
#include <iostream>
#include "Entity.h"

using namespace std;

class ControlSystem
{
	vector<Entity *> m_entities;

public:
	ControlSystem();
	void addEntity(Entity * e);
	void update(SDL_Event & e);
};

