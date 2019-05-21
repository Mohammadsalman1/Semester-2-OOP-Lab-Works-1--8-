#include "Animal.h"

Animal::Animal() {
	move = true;
}

Animal::Animal(bool m) {
	move = m;
}

bool Animal::canMove() {
	return move;
}

