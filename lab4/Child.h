#pragma once
#include <iostream>
#include <string>
class child {
public:
	child(); //automatic constructor
	child(std::string n, std::string s, int a); //assign directly
	child(const child&); //copy another object
	~child(); //deconstructor
	void displayInfo();
private:
	std::string name;
	std::string surname;
	int age;
};
child::child(const child &obj) {
	name = obj.name;
	surname = obj.surname;
	age = obj.age;
}

child::child(std::string n, std::string s, int a) {
	name = n;
	surname = s;
	age = a;
}
child::child() {
	name = " ";
	surname = " ";
	age = 0;
}

child::~child() {
	std::cout << "Object for " << this->name <<
		" was destroyed.\n" << std::endl;
}

void child::displayInfo() {
	std::cout << "Name: " << name << "\nSurname: "
		<< surname << "\nAge " << age << std::endl;
}