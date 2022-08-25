#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <math.h>
#include "shape.hpp"



void m_loop(void) {
	//global namespace of program
	
	//setting up shape
	
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
		if (angle > 360)
			angle = 0;
		else if (angle <= 0)
			angle = 360;
	

		//drawing goes here
	}
};




