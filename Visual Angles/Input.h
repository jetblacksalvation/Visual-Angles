#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <math.h>
#include "shape.hpp"



void m_loop(void) {
	//global namespace of program
	
	//setting up shape
	setup();
	//
	

	while (window.isOpen() == true) {
		while (window.pollEvent(event)) {
			//input checking goes here, output goes in drawing 
			if (event.type == sf::Event::Closed) {
				window.close();
				return;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) {
				angle--;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {
				angle++;
			}
		}
		
		if (angle > 360) {
			angle = 0;
		}
			
		else if (angle <= 0) {
			angle = 360;
		}
		//from given angle update the position of vertices of square 
		float temp;
		for (int x = 0; x < lines.getVertexCount(); x++) {
			temp = distance(player, square[x].pos);
			lines[x].position  =  sf::Vector2f{ temp + cosf(angle) + player.x, temp + sinf(angle) + player.y}, sf::Color::White;

			std::cout << lines[x].position.x << "is the x pos\n";
			std::cout << lines[x].position.y << "is hte y pos\n\n";
		};

		window.clear(sf::Color::Black);
		window.draw(lines);
		window.display();
		//drawing goes here
			
	}
			
		
		
	
};




