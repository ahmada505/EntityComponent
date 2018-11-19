#include "ControlSystem.h"
#include "PositionComponent.h"
#include "ControlComponent.h"
#include <Windows.h>


ControlSystem::ControlSystem()
{
}


ControlSystem::~ControlSystem()
{
}

void ControlSystem::Update() {
	for (int i = 0; i < entities.size(); i++)
	{
		ControllerComponent* controller = entities[i].getComponent<ControllerComponent>(Component::Type::Controller);
		PositionComponent* position = entities[i].getComponent<PositionComponent>(Component::Type::Position);
		if (GetKeyState(controller->GetLeft()) & 0x8000) {
			position->SetXPosition(-1);
		}
		else if (GetKeyState(controller->GetRight()) & 0x8000) {
			position->SetXPosition(1);
		}
		if (GetKeyState(controller->GetUp()) & 0x8000) {
			position->SetYPosition(-1);
		}
		else if (GetKeyState(controller->GetDown()) & 0x8000) {
			position->SetYPosition(1);
		}

	}
}