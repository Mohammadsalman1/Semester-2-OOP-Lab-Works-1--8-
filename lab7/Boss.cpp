#include "Boss.h"
#include <iostream>

using namespace std;

Boss::Boss()
{
	this->Human::Human();
	this->_number_of_worker = 0;
}

Boss::Boss(string surname, string name, string midname,
	int age, int number_of_worker)
{
	this->_surname = surname;
	this->_name = name;
	this->_midname = midname;
	this->_age = age;
	this->_number_of_worker = number_of_worker;
}

void Boss::print()
{
	this->Human::print();
	cout << "Number of worker: " << _number_of_worker << endl;

}

Boss::~Boss()
{
	delete(this);
}