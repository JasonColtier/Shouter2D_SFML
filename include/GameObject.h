﻿#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

#include "Component.h"
#include "TextureManager.h"
#include "Tools/Print.h"

namespace sf {
    class RenderWindow;
}

class GameObject
{

public:

    GameObject();

    virtual void Tick(int64_t deltaTime) = 0;

    virtual void Activate();
    virtual void Deactivate();
    
    void AddComponent(Component* component);

    bool isActivated = true;
    float rotation = 0;
    sf::Vector2f position = sf::Vector2f(0.f,0.f);
    std::vector<Component*> componentList;

protected:

    virtual ~GameObject();
};
