#include "Fish.h"
#include <iostream>

Fish::Fish() {
	swim = false;
}

void Fish::setSwim(bool s) {
	swim = s;
}

Fish::~Fish() {
	std::cout << "Fish does no longer breath.";
}

void Fish::canSwim()
{
	std::cout << "The fish can swim: " << swim << std::endl;
}