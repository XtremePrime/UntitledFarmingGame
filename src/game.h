#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

class State;
class Game
{
private:
	sf::RenderWindow window;
	int game_width = 860, game_height = 640;
	bool is_running = true;
	sf::Clock clock;
	std::vector<State*> state_stack;
	sf::Image icon;
	std::string version = "Pre 0.0.0";

	void init();
	void update(sf::Time);
	void handle_events(sf::Event);
	void render(sf::RenderWindow&);

public:
	void change_state(State* state);
	void push_state(State* state);
	void pop_state();

	void run();
	void quit();

	sf::RenderWindow* get_window() { return &window; }
	std::vector<State*> get_state_stack() { return state_stack; }
	int get_width() { return this->game_width; }
	int get_height() { return this->game_height; }
};
#endif // GAME_H
