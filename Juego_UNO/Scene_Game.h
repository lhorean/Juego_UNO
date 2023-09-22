#pragma once
#include "SFML/Graphics.hpp"
#include<iostream>
                                 
class Scene_Game
{
public:
	Scene_Game()						
	{
	};

	virtual void update()
	{
	};

	virtual void poll_events()
	{
	};

	virtual void Render_W(sf::RenderWindow& window)
	{
	};

};
