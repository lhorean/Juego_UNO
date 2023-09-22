#pragma once
#include "game.h"


Game::Game()
{
	
	initialization_variables();
	initialization_window();

}

Game :: ~Game() 
{

}

void Game::update_window()
{

}

void Game::render_window() 
{
	

}

void Game::poll_events() 
{
	while (this -> window_game -> pollEvent(this->event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:

			window_game -> close();
			break;

		default:
			break;
		}

	}

}

bool Game::playing()
{
	return this -> window_game -> isOpen();
}

void Game::initialization_variables()
{
	this -> window_game = nullptr;
	this -> video_mode = sf::VideoMode();
	this ->event = sf::Event();
}


void Game::initialization_window()
{
	this -> video_mode.height = 800;
	this -> video_mode.width = 800;
	this->window_game = new sf::RenderWindow(this->video_mode, "Windows Game", sf::Style::Default);
}
