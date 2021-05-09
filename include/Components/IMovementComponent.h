#ifndef  IMOVEMENTCOMPONENT_H
#define IMOVEMENTCOMPONENT_H
#include "Component.h"
#include "GameObjects/GameObject.h"

class IMovementComponent : public Component
{
public:

	virtual ~IMovementComponent() override  = default;

	float distance = 0;
	float speed = 0.001f;

};

#endif // ! IMOVEMENTCOMPONENT_H

