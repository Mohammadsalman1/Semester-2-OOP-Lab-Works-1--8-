#include "Bird.h"
#include <iostream>

Bird::Bird(bool s) : voice(s) {}


void Bird::canMakeSound()
{
	std::cout << "Can the bird make sound: " << voice << std::endl;
}