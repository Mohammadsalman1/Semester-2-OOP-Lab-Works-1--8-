#pragma once
#include "Alive.h"

class Bird : public Alive
{
public:
	Bird(bool);
	void canMakeSound();
private:
	bool voice;
};