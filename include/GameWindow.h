﻿#ifndef GAMEWORLD_H
#define GAMEWORLD_H

#include <string>
#include <SFML/System/Vector2.hpp>
#include "GameLevel.h"

namespace sf {
	class RenderWindow;
}


class GameWindow
{
public:

	inline static sf::RenderWindow* window;
	inline static sf::Vector2f sizeWindow;
	inline static sf::Vector2i cursorPos;

	//global parameters
	inline static bool useFullscreen = true;

	inline static std::string gameName = "Shooter 2D SFML";

	static void LoadGameLevel()
	{
		currentGameLevel = new GameLevel();
	}

	static GameLevel* GetGameLevel()
	{
		return currentGameLevel;
	}

	//fonction utilitaire qui check si l'objet passé en paramètre est à l'intérieur de la fenêtre ou pas
	static bool CheckIfInsideWindow(GameObject* gameObject);
	

private:

	inline static GameLevel* currentGameLevel;
};

#endif //GAMEWORLD_H
