#include <iostream>
#include <cstdlib>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "game.h"

int main(int argc, char** argv)
{
	Game game;
	game.run();

	return EXIT_SUCCESS;
}
