#ifndef TILE_H
#define TILE_H

#include <SFML/Graphics.hpp>

class Tile
{
private:
	sf::Texture txr;
	sf::Sprite sprite;

	int x, y, w, h;
public:
	Tile(int, int, std::string);
	void render(sf::RenderWindow*);

	sf::Sprite& get_sprite(){return this->sprite;}
	int get_width() { return this->w; }
	int get_height() { return this->h; }
};

#endif // TILE_H
