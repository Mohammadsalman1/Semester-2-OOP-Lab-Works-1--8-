#include <iostream>
#include <string>
#include "Child.h"
#include "complexNumber.h"
#include "MathVector.h"
#include "Tiles.h"


int main() {

	/*Variant 1*/

	child son("Eric", "Politov", 18);
	child daughter("Mary", "Anna", 8);
	child cousin(son);
	son.displayInfo();
	son.~child();
	daughter.displayInfo();
	daughter.~child();
	cousin.displayInfo();
	std::cout << "\n<Press any key to continue>\n";
	std::cin.get();

	/*Variant 2*/

	Tiles a, b, c;
	a.getData();
	b.getData();
	c.getData();
	std::cout << "\n<Press any key to continue>\n";
	std::cin.get();

	/*Variant 3*/

	complexNumber comp1, comp2;
	comp1.getNumber(2, -2);
	comp2.getNumber(3, 4);

	std::cout << comp1.calModulus() << std::endl;
	comp1.~complexNumber();

	std::cout << comp2.calModulus() << std::endl;
	comp2.~complexNumber();
	std::cin.get();
	std::cout << "\n<Press any key to continue>\n";
	std::cin.get();

	/*Variant 4*/

	mathVector v1, v2, sol;
	v1.initVect(-2, 5);
	v2.initVect(8, 0);
	sol = sol.addVector(v1, v2);
	sol.displayVec();
	sol = sol.subVector(v2, v1);
	sol.displayVec();
	std::cout << "\n<Press any key to continue>\n";
	std::cin.get();

}
