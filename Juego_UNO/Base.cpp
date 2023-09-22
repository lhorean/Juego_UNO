#include"Base.h"
using namespace std;

Base::Base()
{
	if (!button_texture.loadFromFile("cards/blue_3.png"))
	{
		cout << endl << "SHOW CARD ERROR" << endl;
	}
	button_sprite.setTexture(button_texture);
}

Base:: ~Base()
{
}

void Base::update()
{
}

void Base::Render_W(sf::RenderWindow& window)
{
	window.draw(button_sprite);
}

void Base::poll_events()
{
}