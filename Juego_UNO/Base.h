#pragma once
#include "Scene_Game.h"

class Base : public Scene_Game
{
private:
	sf::Sprite button_sprite;
	sf::Texture button_texture;


public:
	Base();

	~Base();

	void update() override;

	void Render_W(sf::RenderWindow& window) override;

	void poll_events() override;
};