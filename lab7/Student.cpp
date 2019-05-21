#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
	this->Human::Human();
	this->_on_lesson = false;
}

Student::Student(string surname, string name, string midname, 
	int age, bool on_lesson)
{
	this->_surname = surname;
	this->_name = name;
	this->_midname = midname;
	this->_age = age;
	this->_on_lesson = on_lesson;

}

void Student::print()
{
	this->Human::print();
	if (this->_on_lesson)
		cout << "On lesson : Yes " << endl;
	else
		cout << "On lesson : No " << endl;
}

Student :: ~Student()
{
	delete(this);
}