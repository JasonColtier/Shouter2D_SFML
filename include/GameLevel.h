﻿#include <cstdint>
#include <list>
#include <SFML/Window/Window.hpp>

#include "Singleton.h"

class Component;
class GameObject;
class CollisionManager;
class Player;
class CollisionComponent;

namespace sf {
    class RenderWindow;
}


class GameLevel : public Singleton<GameLevel>
{
    friend class Singleton<GameLevel>;

public:

    //called by the game loop
    virtual void Update(int64_t deltaTime);
    virtual void Render(sf::RenderWindow* window);

    void SpawnObject(GameObject* gameObject);
    
    std::vector<GameObject*> l_gameObjects;
    std::vector<Component*> l_renderComponents;
    std::vector<CollisionComponent*> l_collisionComponents;
	
private:

    /*
     *Level assets
     */

    
    Player* player;
    //EnemySpawner*

    CollisionManager* collisionManager;
	
    //contiendra toutes les instances de nos gameObjects
    GameLevel();
    
};
