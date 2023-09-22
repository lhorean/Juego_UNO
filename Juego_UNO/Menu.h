#pragma once
#include "Scene_Game.h"

class Menu : Scene_Game
{
private:
	sf::Sprite button_sprite;
	sf::Texture button_texture;


public: 
	Menu();
	~Menu();

	void update() override;

	void poll_events() override;

	void Render_W(sf::RenderWindow& window) override;



};