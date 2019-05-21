#pragma once
#include <iostream>
#include <string>
class child {
public:
	child(std::string n, std::string s, int a);
	~child();
	void displayInfo();
private:
	std::string name;
	std::string surname;
	int age;
};


child::child(std::string n, std::string s, int a) {
	name = n;
	surname = s;
	age = a;
}
child::~child() {
	std::cout << "Object for " << this->name <<
		" was destroyed.\n" << std::endl;
}

void child::displayInfo() {
	std::cout << "Name: " << name << "\nSurname: "
		<< surname << "\nAge " << age << std::endl;
}