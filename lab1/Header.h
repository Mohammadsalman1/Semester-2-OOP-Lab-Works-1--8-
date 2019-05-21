#pragma once
#include <string>

struct UserComplex
{
	float Re;
	float Img;
	void inputComplex(std::string);
};


void calculate(UserComplex &x, UserComplex &y, char oper);