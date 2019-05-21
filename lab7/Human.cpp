#include "Human.h"
#include <iostream>

using namespace std;

Human::Human()
{
	this->_surname = "";
	this->_name = "";
	this->_midname = "";
	this->_age = 0;
}

Human::Human(string surname, string name, string midname, int age)
{
	this->_surname = surname;
	this->_name = name;
	this->_midname = midname;
	this->_age = age;

}

void Human::print()
{
	cout << "Surname:" << _surname << endl;
	cout << "Name: " << _name << endl;
	cout << "Midname: " << _midname << endl;
	cout << "Age: " << _age << endl;
}

Human::~Human()
{
	delete(this);
}