#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>

int main()
{
	// Window
	sf::RenderWindow window(sf::VideoMode(640, 480), "My First Game", sf::Style::Titlebar | sf::Style::Close);
	sf::Event ev;

	//Game Loop
	while (window.isOpen())
	{
		//Event Pooling
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (ev.key.code == sf::Keyboard::Escape)
					window.close();
				break;
				
			}
		}

		//Update


		//Render
		window.clear(sf::Color::Blue); //Clear old frame

		//Draw your Game

		window.display(); //Tell app that window is done drawing
	}

	return 0;
}