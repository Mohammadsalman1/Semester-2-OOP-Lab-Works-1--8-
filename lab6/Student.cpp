#include "Student.h"

Student::Student() {
	faculty = "Unknown";
	group = "Unknown";
	name = "Unknown";
	age = 0;
	sex = unknown;
}

Student::Student(const char* f, const char* g, const char* n, int a, Gender s)
	: faculty(f), group(g), name(n), age(a), sex(s) {}

void Student::print() {
	std::cout << "\n" << "Name: " << name << "\nFaculty: "
		<< faculty << "\nSpeciality: " << group << "\nAge: "
		<< age << "\nGender: " << sex;
}
unsigned Student::getAge() const {
	return age;
}

void Student::printSex() const {
	std::cout << sex << std::endl;
}

Gender Student::getSex() const {
	return sex;
}
