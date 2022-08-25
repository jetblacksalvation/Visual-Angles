#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <math.h>
#define PI 3.14159265359
#define off 500

int count = 0;


struct p {
	sf::Vector2f pos;
	struct p* next;


}square[] = {
	/*
		when the next varibale is marked as null, indicates end of shape


		200, 200
		200, 400
		400, 400
		400, 200
	*/


	* new sf::Vector2f(off + 200,off + 200), &square[int(count++)],
	*new sf::Vector2f(off + 200, off + 400), &square[int(count++)],
	*new sf::Vector2f(off+400, off+400), &square[int(count++)],
	*new sf::Vector2f(off+400, off+200), NULL





};


