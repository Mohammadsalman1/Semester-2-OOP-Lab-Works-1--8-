#pragma once

#include "Human.h"

class Boss : public Human
{
public:
	Boss();
	Boss(std::string, std::string, std::string, int, int);
	void print();
	~Boss();

private:
	int _number_of_worker;
};