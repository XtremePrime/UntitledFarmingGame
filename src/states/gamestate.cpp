#include "gamestate.h"

#include <SFML/Graphics.hpp>
#include <sstream>
#include <iostream>
#include <SFML/Window.hpp>
#include <stdexcept>

GameState* GameState::_instance;

GameState* GameState::instance(){
	if(_instance == NULL)
		_instance = new GameState();
	return _instance;
}

void GameState::init(Game* game)
{
	level.init();
	game->get_window()->setView(level.get_view());
}

void GameState::handle_events(Game* game, sf::Event event)
{
	if(event.type == sf::Event::KeyPressed)
	{
		switch(event.key.code)
		{
			case sf::Keyboard::Escape:
			{
				game->quit();
			}break;
			default:
            break;
		}
	}
}

void GameState::update(Game* game,  sf::Time deltaTime)
{
	cursor = sf::Mouse::getPosition(*game->get_window());
	level.update(deltaTime);
	try{
		std::cout << level.get_tile(cursor.x, cursor.y)->id << "\n";
	}catch(const std::out_of_range& oor){
		
	}
	
}

void GameState::render(Game* game)
{
	level.render(game->get_window());
}

void GameState::cleanup()
{
	_instance = NULL;
}

void GameState::pause()
{

}

void GameState::resume()
{

}
