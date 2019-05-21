#pragma once
#include "Alive.h"

class Animal :	public Alive
{
public:
	Animal();
	Animal(bool);
	bool canMove();
private:
	bool move;
};