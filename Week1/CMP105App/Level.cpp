#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect1.setSize(sf::Vector2f(150, 210));
	rect1.setPosition(100, 100);
	rect1.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(100, 140));
	rect2.setPosition(125, 135);
	rect2.setFillColor(sf::Color::Magenta);

	rect3.setSize(sf::Vector2f(50, 70));
	rect3.setPosition(150, 170);
	rect3.setFillColor(sf::Color::Blue);

	circle.setRadius(75);
	circle.setPosition(500, 450);
	circle.setFillColor(sf::Color::Cyan);

	if (!font.loadFromFile("font/arial.ttf")) {
		std::cout << "Error Loading Font\n";
	}

	text.setFont(font);
	text.setString("Hello world");
	text.setCharacterSize(24);
	text.setPosition(300, 50);
	text.setFillColor(sf::Color::Red);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	rect4.setSize(sf::Vector2f(80, 50));
	sf::Vector2u pos = window->getSize();
	rect4.setPosition(pos.x - 80,pos.y - 50);
	rect4.setFillColor(sf::Color::Green);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(rect1);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(rect4);
	window->draw(circle);
	window->draw(text);

	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 49, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}