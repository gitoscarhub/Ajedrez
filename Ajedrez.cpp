#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
Texture texture;
Texture texture2;
Sprite sprite;
Sprite sprite2;
Sprite sprite3;
Sprite sprite4;
Sprite sprite5;
Sprite sprite6;
Sprite sprite7;
Sprite sprite8;
Sprite sprite9;
Sprite sprite10;
Sprite sprite11;
Sprite sprite12;
Sprite sprite13;
Sprite sprite14;
Sprite sprite15;
Sprite sprite16;
Sprite sprite17;
Sprite sprite18;
Sprite sprite19;
Sprite sprite20;
Sprite sprite21;


float escalaX;
float escalaY;
float height_texture, width_texture;
float height_texture2, width_texture2;



int main(){

	texture.loadFromFile("chessw.png");
	texture2.loadFromFile("chessb.png");
	sprite.setTexture(texture);
	sprite.setPosition(0, 0);
	sprite2.setTexture(texture2);
	sprite2.setPosition(128,0);
	sprite3.setTexture(texture);
	sprite3.setPosition(256,0);
	sprite4.setTexture(texture2);
	sprite4.setPosition(384,0);
	sprite5.setTexture(texture);
	sprite5.setPosition(512, 0);
	sprite6.setTexture(texture2);
	sprite6.setPosition(640, 0);
	sprite7.setTexture(texture);
	sprite7.setPosition(768, 0);
	sprite8.setTexture(texture2);
	sprite8.setPosition(0,128);
	sprite9.setTexture(texture);
	sprite9.setPosition(128, 128);
	sprite10.setTexture(texture2);
	sprite10.setPosition(256, 128);
	sprite11.setTexture(texture);
	sprite11.setPosition(384,128);
	sprite12.setTexture(texture2);
	sprite12.setPosition(512, 128);
	sprite13.setTexture(texture);
	sprite13.setPosition(640, 128);
	sprite14.setTexture(texture2);
	sprite14.setPosition(768,128);
	sprite15.setTexture(texture);
	sprite15.setPosition(0, 256);
	sprite16.setTexture(texture2);
	sprite16.setPosition(128, 256);
	sprite17.setTexture(texture);
	sprite17.setPosition(256, 256);
	sprite18.setTexture(texture2);
	sprite18.setPosition(384, 256);
	sprite19.setTexture(texture);
	sprite19.setPosition(512, 256);
	sprite20.setTexture(texture2);
	sprite20.setPosition(640, 256);
	sprite21.setTexture(texture);
	sprite21.setPosition(768, 256);
	
	
	height_texture = (float)texture.getSize().y;
	height_texture2 = (float)texture2.getSize().y;
	width_texture = (float)texture.getSize().x;
	width_texture2 = (float)texture2.getSize().x;

	escalaY =1;
	escalaX =1;

	sprite.setScale(escalaX, escalaY);
	sprite2.setScale(escalaX, escalaY);
	sprite3.setScale(escalaX, escalaY);
	sprite4.setScale(escalaX, escalaY);
	sprite5.setScale(escalaX, escalaY);
	sprite6.setScale(escalaX, escalaY);
	sprite7.setScale(escalaX, escalaY);
	sprite8.setScale(escalaX, escalaY);
	sprite9.setScale(escalaX, escalaY);
	sprite11.setScale(escalaX, escalaY);
	sprite12.setScale(escalaX, escalaY);
	sprite13.setScale(escalaX, escalaY);
	sprite14.setScale(escalaX, escalaY);
	sprite15.setScale(escalaX, escalaY);
	sprite16.setScale(escalaX, escalaY);
	sprite17.setScale(escalaX, escalaY);
	sprite18.setScale(escalaX, escalaY);
	sprite19.setScale(escalaX, escalaY);
	sprite20.setScale(escalaX, escalaY);
	sprite21.setScale(escalaX, escalaY);
	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"Que ventana horrible");
	while (App.isOpen())
	{
		App.clear();
		App.draw(sprite);
		App.draw(sprite2);
		App.draw(sprite3);
		App.draw(sprite4);
		App.draw(sprite5);
		App.draw(sprite6);
		App.draw(sprite7);
		App.draw(sprite8);
		App.draw(sprite9);
		App.draw(sprite10);
		App.draw(sprite11);
		App.draw(sprite12);
		App.draw(sprite13);
		App.draw(sprite14);
		App.draw(sprite15);
		App.draw(sprite16);
		App.display();

	}
	return 0;
}
