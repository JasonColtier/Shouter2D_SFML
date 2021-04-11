﻿

#include <SFML/Graphics/Sprite.hpp>

#include "Component.h"


class GameObject;

namespace sf {
    class RenderWindow;
}

class RenderComponent : public Component
{
public:
    
    RenderComponent(GameObject* parentGameObject,sf::RenderWindow* window,sf::Texture* texture);
    
    GameObject* parentGameObject;
    sf::RenderWindow* window;
    sf::Texture* texture;
    sf::Sprite sprite;
    
    virtual void UpdateComponent();

};


