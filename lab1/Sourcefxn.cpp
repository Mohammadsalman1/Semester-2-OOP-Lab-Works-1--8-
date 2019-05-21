#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
#include "Header.h"

void UserComplex::inputComplex(std::string inputString)
{
	std::vector<std::string> vecsCalc;
	std::string sIndivStr;
	char cspace = ' ';

	std::stringstream ss(inputString);

	while (getline(ss, sIndivStr, cspace))
	{
		vecsCalc.push_back(sIndivStr);
	}
	Re = stoi(vecsCalc[0]);
	Img = stoi(vecsCalc[1]);
}


void calculate(UserComplex &x, UserComplex &y, char oper)
{
	UserComplex sol;
	int dom;

	switch (oper)
	{
	case '+':
		sol.Re = x.Re + y.Re;
		sol.Img = x.Img + y.Img;
		std::cout << " = (" << sol.Re << " " << sol.Img << "i)" << std::endl;
		break;
	case '-':
		sol.Re = x.Re - y.Re;
		sol.Img = x.Img - y.Img;
		std::cout << " = (" << sol.Re << " " << sol.Img << "i)" << std::endl;
		break;

	case '*':
		sol.Re = (x.Re * y.Re) - (x.Img * y.Img);
		sol.Img = (x.Re * y.Img) + (x.Img * y.Re);
		std::cout << " = (" << sol.Re << " " << sol.Img << "i)" << std::endl;
		break;
	case '/':
		dom = ((y.Re) * (y.Re)) + ((y.Img) * (y.Img));
		sol.Re = ((x.Re * y.Re) + (x.Img * y.Img)) / sqrt(dom);
		sol.Img = ((-(x.Re * y.Img)) + (x.Img * y.Re)) / sqrt(dom);
		std::cout << " = (" << sol.Re << " " << sol.Img << "i)" << std::endl;
		break;
	
	default:
		std::cout << "Wrong operator! Try Again" <<std::endl;
		
		break;
	}	
	
}
