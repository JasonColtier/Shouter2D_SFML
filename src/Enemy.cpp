#include "Enemy.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include "GameLevel.h"
#include "GameLoop.h"
//#include "Player.h"
//#include "RenderHandler.h"
#include "Tools/VectorTools.h"
#include <ostream>
#include <random>
#include <valarray>


Enemy::Enemy()
{
	////TODO mettre la r�cup du Player
	////player = .....

	//Print::PrintString("here comes a new challenger");

	//auto* RenderHandlers = new RenderHandler(this, GameLoop::GetInstance()->window, TextureManager::GetInstance()->GetTexturePtr(TextureManager::Ship));
	//RenderHandlers->sprite.setOrigin(sf::Vector2f(50.f, 50.f));
	//RenderHandlers->sprite.setScale(sf::Vector2f(1.0f, 1.0f));

	//AddComponent(RenderHandlers);

	////position de d�part du vaisseau
	//position = sf::Vector2f(300.f, 300.f);


	////offset pour que le nez du vaisseau soit vers la souris
	//offsetPos.x = 100 * 0.5f / 2;
	//offsetPos.y = 100 * 0.5f / 2;

}

void Enemy::Tick(int64_t deltaTime)
{
	////TODO � retirer plus tard
	//auto posPlayer = GameLoop::GetInstance()->cursorPos;

	////TODO ins�rer la r�cup de la Position du Player ici
	////auto posPlayer = player.pos;
	//auto pos = position;

	////distance vers la souris
	//float deltaPosX = posPlayer.x - (pos.x + offsetPos.x);
	//float deltaPosY = posPlayer.y - (pos.y + offsetPos.y);

	////on normalise cette distance
	//sf::Vector2f normDelta = VectorTools::NormaliseVector(sf::Vector2f(deltaPosX, deltaPosY));

	////rotation pour se tourner vers la souris
	//float rot = std::atan2(deltaPosY, deltaPosX) * 180 / std::_Pi;
	//rotation = rot + offsetAngle;

	////avant d'appliquer directement l'input, on va tester cette acceleration
	//sf::Vector2f acceleration = inertia;
	//acceleration.x += normDelta.x * speed * deltaTime * 0.0001f;
	//acceleration.y += normDelta.y * speed * deltaTime * 0.0001f;

	////ton v�rifie que l'acceleration ne sera pas trop grande avant de l'appliquer
	//if (VectorTools::Length(acceleration) < maxVelocity)
	//{
	//	inertia = acceleration;
	//}


	////la force de ralentissement
	//float dragForce = 1 - (drag * (deltaTime / 1000.f));

	////on applique cette force, proche de 0,999
	//inertia *= dragForce;

	////on set la position, toujours en fonction du deltatime
	//position = pos + (inertia * (deltaTime * 1.f));


	///*
	// * Check for side wrap of the player's position. TP from one side of the window to the other
	// */

	//auto window = GameLoop::GetInstance()->window;

	//int leftBorder = 0;
	//int topBorder = 0;
	//int rightBorder = leftBorder + window->getSize().x;
	//int bottomBorder = topBorder + window->getSize().y;

	////si on est trop � gauche on TP � droite
	//if (position.x < leftBorder)
	//{
	//	position.x = rightBorder;
	//}if (position.y < topBorder)
	//{
	//	position.y = bottomBorder;
	//}if (position.x > rightBorder)
	//{
	//	position.x = leftBorder;
	//}if (position.y > bottomBorder)
	//{
	//	position.y = topBorder;
	//}
}