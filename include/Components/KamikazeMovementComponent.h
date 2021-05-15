#ifndef KAMIKAZEMOVEMENTCOMPONENT_H
#define KAMIKAZEMOVEMENTCOMPONENT_H

#include "Components/IMovementComponent.h"
#include "BaseEnemyMovementComponent.h"
#include "GameObjects/GameObject.h"

class KamikazeMovementComponent : public BaseEnemyMovemementComponent
{
public:

	KamikazeMovementComponent() = default;
	~KamikazeMovementComponent() override = default;

	virtual void TickComponent(int64_t deltaTime = 0) override;

};

#endif // !ENEMYMOVEMENTCOMPONENT_H

