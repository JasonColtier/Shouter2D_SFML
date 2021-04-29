﻿#include "GameObjects/GameObject.h"

void GameObject::AddComponent(Component* component)
{
	componentList.push_back(component);
	component->Owner = this;
}

void GameObject::OnCollision(sf::Vector2f hitPoint, GameObject* otherObject)
{
}

void GameObject::Tick(int64_t deltaTime)
{
	for (Component* component : componentList)
	{
		if (component->activateTick)
		{
			component->TickComponent(deltaTime);
		}
	}
}

void GameObject::Activate()
{
	isActivated = true;
}

void GameObject::Deactivate()
{
	isActivated = false;
}