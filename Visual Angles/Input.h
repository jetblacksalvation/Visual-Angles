#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <math.h>
#define PI 3.14159265359

//angle class - returns to 0 after 360
struct angle {
	 float ang;

	 float to_radians() {
		return (ang * PI) / 180;
	}

}angl ={0};
float(*dist)();

sf::Vector2f point(500 + 250, 500 + 250);//250 x and 250 y 
sf::Vector2f origin(500, 500);
float n() {

	std::cout << sqrt(
		((powf(point.x, 2) - powf(origin.x, 2)) + (powf(point.y, 2) - powf(origin.y, 2)))
	)<<std::endl;
	system("pause");

	return sqrt(
		((powf(point.x, 2) - powf(origin.x, 2)) + (powf(point.y, 2) - powf(origin.y, 2)))
	);


};


void input(sf::RenderWindow& window, sf::Vector2<long float>& pos, sf::Event event, sf::CircleShape player) {
	//basically global namespace 
	angl.ang;//angle of player view 
	dist = &n;
	sf::CircleShape obj(30);
	obj.setPosition(point);
	const float distance = dist();
	
	while (window.isOpen()==true)
	{
		while (window.pollEvent(event)) {
			//event queue
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (event.type == sf::Keyboard::Q) {
				angl.ang --;
			}
			if (event.type == sf::Keyboard::E) {
				angl.ang ++;
			}
			


		}
		if (angl.ang >= 360) {
			angl.ang = 0;
		}

		if (distance != dist()) {
			std::cout << "not equall\n";
		}


		point.x = (distance * cosf(angl.to_radians())) + origin.x;

		point.y = (distance * sin(angl.to_radians())) + origin.y;
		window.clear(sf::Color::Black);
		obj.setPosition(point);
		window.draw(obj);
		window.display();
		//std::cout <<point.x <<" is x val \n";
		//std::cout << point.y << "  is y val \n\n";
		n();
	}





}
