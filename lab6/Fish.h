#pragma once
#include "Alive.h"

class Fish : public Alive
{
public:
	Fish();
	~Fish();
	void setSwim(bool);
	void canSwim();
private:
	bool swim;
};