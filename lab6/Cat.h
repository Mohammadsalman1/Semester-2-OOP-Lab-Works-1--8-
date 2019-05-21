#pragma once
#include "PreProp.h"
#include "Animal.h"

class Cat :	public Animal
{
public:
	void getSound();
private:
	std::string sound = "meow"; 
};