#pragma once

#include "Human.h"

class Student : public Human
{
public:
	Student();
	Student(std::string, std::string, std::string, int, bool);
	void print();
	~Student();

private:
	bool _on_lesson;
};
