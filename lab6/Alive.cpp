#include "Alive.h"
#include "PreProp.h"

Alive::Alive() {
	std::cout << "New Ojbect Constructed!" << std::endl;
}

Alive::Alive(bool isAl) : breath(isAl) {
	std::cout << "New Ojbect Constructed!" << std::endl;
}

void Alive::setAlive(bool isAl) {
	breath = isAl;
}

void Alive::isAlive() {
	std::cout << "Is Alive: " << breath << std::endl;
}

Alive::~Alive() {
	std::cout << "Ojbect Deconstructed!" << std::endl;
}