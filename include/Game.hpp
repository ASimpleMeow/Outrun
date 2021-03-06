#ifndef GAME_HPP
#define GAME_HPP

#include "core.hpp"
#include <vector>

class Game {
public:
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;

	Game();
	void run();

	sf::RenderWindow window;

	float fov{ 10.0f };
	sf::Vector3f camera{ 0.0f, 0.0f, 0.0f };

	sf::Vector2f project(const sf::Vector3f &world, sf::Vector3f &camera, float d);
	void drawSquare(sf::RenderWindow &window, const std::vector<sf::Vector3f> &coords, const sf::Color &c, const float d);

private:
	bool processEvents();
	void update(sf::Time deltaTime);
	void render();

};


#endif
