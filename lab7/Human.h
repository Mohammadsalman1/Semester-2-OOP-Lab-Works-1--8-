#pragma once

#include <string>

using namespace std;

class Human
{
public:
	Human();
	Human(string surname, string name, string midname, int age);
	virtual void print() = 0;
	~Human();

protected:
	string _surname;
	string _name;
	string _midname;
	int _age;

};
