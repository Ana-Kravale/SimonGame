/// <summary>
/// Anastasia Kravale
/// C00271786
/// date start: 21 Jan 2022
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();

	void setupFontAndText(); //text
	sf::Font m_gameFont;
	sf::Text m_gameName;
	sf::Text m_menuGreen; // setup green message easy game 8
	sf::Text m_menuRed; // set red text for medium game 16
	sf::Text m_menuBlue; // setup yellow text  for hard game 32
	sf::Text m_menuBlue; // setup blue message to exit game

	void drawRectangle(); //rectangle shape
	sf::RectangleShape m_redRectangle;
	sf::RectangleShape m_yellowRectangle;
	sf::RectangleShape m_blueRectangle;
	sf::RectangleShape m_greenRectangle;

	sf::RenderWindow m_window; // main SFML window
	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP

