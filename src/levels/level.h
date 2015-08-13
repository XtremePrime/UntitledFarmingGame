#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include <SFML/Graphics.hpp>
#include "tile.h"

class Level
{
private:
	const int SIZE_X = 20, SIZE_Y = 20;
	std::vector<Tile*> tiles;
	sf::View view;
public:
	void init();

	void handle_events(sf::Event);
	void render(sf::RenderWindow*);
	void update(sf::Time);

	sf::View& get_view() {return this->view;} 
};

#endif // LEVEL_H
