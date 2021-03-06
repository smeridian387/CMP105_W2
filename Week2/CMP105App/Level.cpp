#include "Level.h"
using namespace std;

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

}

Level::~Level()
{
	input = nullptr;
}

// handle user input
void Level::handleInput()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		cout << "The W key is being pressed" << endl;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::J) &&
		sf::Keyboard::isKeyPressed(sf::Keyboard::K) &&
		sf::Keyboard::isKeyPressed(sf::Keyboard::L))
	{
		cout << "J, K and L are being pressed" << endl;
	}

}

// Update game objects
void Level::update()
{

}

// Render level
void Level::render()
{
	beginDraw();

	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}