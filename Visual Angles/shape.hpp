#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#define PI 3.14159265359
#define off 500
/*
	the purpose of this header file is to keep things organized over at input. h
	while this header is messy, it is only used for initializing data and defining it using setup funciton at bottom 


*/


int count = 0;
sf::VertexArray lines;//you can't assign or add struff to variables unless you use a function, 
//that is the point of the setup function below


sf::RenderWindow window({ 1000,1000 }, " Rotate");
sf::Event event;
int angle = 0;
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
	*new sf::Vector2f(off + 400, off + 400), &square[int(count++)],
	*new sf::Vector2f(off + 400, off + 200), NULL

};
float distance(sf::Vector2f point1, sf::Vector2f point2) {
	//it doesn't matter which one you use 
	//return the distance formula 
	return sqrtf(powf(point1.x - point2.x, 2) + powf(point1.y - point2.y, 2));
}
void setup(void) {

	
 	lines.setPrimitiveType(sf::PrimitiveType::Quads);


}