#pragma once
#include<SFML/Graphics.hpp>

class Game
{
private: 

	sf::Event event;
	sf::RenderWindow* window_game;
	sf::VideoMode video_mode;

	void initialization_variables();
	void initialization_window();

public:

	
	Game();
	~Game();

	void update_window();
	void render_window();
	void poll_events();
	
	bool playing();
	
};