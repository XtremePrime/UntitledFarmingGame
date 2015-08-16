#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include <SFML/Graphics.hpp>
#include "tile.h"

class Level
{
private:
	const int SIZE_X = 5, SIZE_Y = 5;
	std::vector<Tile*> tiles;
	sf::View view;
	sf::Vector2u map_size;
public:
	void init();

	void handle_events(sf::Event);
	void render(sf::RenderWindow*);
	void update(sf::Time);

	Tile* get_tile(int, int);
	sf::View& get_view() {return this->view;} 
};

#endif // LEVEL_H
