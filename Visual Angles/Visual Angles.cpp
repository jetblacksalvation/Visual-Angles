// Visual Angles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Input.h"
sf::RenderWindow window({ 1000,1000 }, "Angular Rotation");


int main()
{
    window.setFramerateLimit(60);

    std::cout << "Hello World!\n";



    input(window, *new sf::Vector2<long float>{ 500,500 }, *new sf::Event(), *new sf::CircleShape(50));
    

}