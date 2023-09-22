
#include <iostream>
#include "SFML/Graphics.hpp"
#include <Windows.h>
#include "Show_Cards.hpp"
#include "game.h"
using namespace std;


int main() {

	Game game = Game();
	while (game.playing())
	{
		game.poll_events();
		game.update_window();
		game.render_window();

	}
	return 0;
}