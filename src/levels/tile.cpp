#include "tile.h"

#include <iostream>

Tile::Tile(int id, int xx, int yy, std::string file)
{
	txr.loadFromFile(file);
	sprite.setTexture(txr);

	this->x = xx;
	this->y = yy;
	this->w = 32;
	this->h = 16;
	this->id = id;

	sprite.setPosition(sf::Vector2f(x, y));
}

void Tile::render(sf::RenderWindow* window)
{
	window->draw(sprite);
}