#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1200, 600), "Octogeon");


	Texture Player;
	Player.loadFromFile("player.png");

	Sprite PlayerS;
	PlayerS.setTexture(Player);
	PlayerS.setTextureRect(IntRect(574, 346, 225, 225));
	PlayerS.setPosition(574,346);
	while (window.isOpen()) {
		sf::Event Game;
		while (window.pollEvent(Game))
		{
			if (Game.type == sf::Event::Closed)
				window.close();
			window.draw(PlayerS);
			window.display();
		}
	}
	return 0;
}