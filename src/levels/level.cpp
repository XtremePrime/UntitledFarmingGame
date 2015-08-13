#include "level.h"

#include <cmath>
#include <iostream>

void Level::init()
{
	#define X_OFFSET 860/2-(SIZE_X/2)*32
	#define Y_OFFSET 640/2
	for(int i = 0; i < SIZE_X*SIZE_Y; ++i)
	{
		int x = (int)i%SIZE_X, y = (int)floor(i/SIZE_Y);
		#define xgen (x*32/2)+(y*32/2)
		#define ygen (y*16/2)-(x*16/2)
		tiles.push_back(new Tile(X_OFFSET+xgen, Y_OFFSET+ygen, "res/grass.png"));
		std::cout << "Tile[" << i << "] generated at " << xgen << "," << ygen << "\n";
		#undef xgen
		#undef ygen
	}
	#undef X_OFFSET
	#undef Y_OFFSET

	view.reset(sf::FloatRect(860/2-(860/2)/2, 640/2-(640/2)/2, 860/2, 640/2));
}

void Level::handle_events(sf::Event ev)
{

}

void Level::render(sf::RenderWindow* window)
{
	for(Tile* t : tiles){
		t->render(window);
	}
}

void Level::update(sf::Time deltaTime)
{

}
