
#include <iostream>
#include "SFML/Graphics.hpp"
#include <Windows.h>
using namespace std;

int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);

    sf::RenderWindow window_game(sf::VideoMode(800, 800), "SFML", sf::Style::Default);
    window_game.setFramerateLimit(30);
	
	sf::Texture texture;
	sf::Sprite front_page;
	front_page.setTexture(texture);
	texture.loadFromFile("portada_uno.png");



	

	do
	{
		window_game.clear();

		window_game.draw(front_page);

		window_game.display();
		sf::Event event;

		if (window_game.pollEvent(event))
		{
			switch(event.type) 
			{

			case sf::Event::Closed:
				window_game.close();

			default: 

				break;
			}
		}

	} while (window_game.isOpen());




        return 0; 
}

