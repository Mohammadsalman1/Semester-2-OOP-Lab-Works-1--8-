#pragma once
#include"PreProp.h"

enum Gender : char {female = 'F', male = 'M', unknown = 'U'};

class Student {
public:
	Student();
	Student(const char* f, const char* g, const char* n, int a, Gender s);
	void print();
	unsigned int getAge() const;
	void printSex() const;
	Gender getSex() const;

protected:
	const char* name;
	const char* group;
	const char* faculty;
	unsigned int age;
	Gender sex;
};