#pragma once
#include "Student.h"
class Stalast : public Student
{
public:
	Stalast();
	Stalast(const char*, const char*, const char*, unsigned int, Gender);
	Stalast(const char*, const char*, const char*, unsigned int, Gender,
		float, float);
	void setHeight(float);
	void setWeight(float);
	void getInfoStal() ;
private:
	float heightinCM;
	float weightinKG;
};