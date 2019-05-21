#pragma once

#include <iostream>

class mathVector {
public:
	mathVector() {
		corX = 0;
		corY = 0;
	}
	~mathVector() {
		std::cout << "Oops! object destroyed!";
	}
	mathVector(const mathVector &copy) {
		corX = copy.corX;
		corY = copy.corY;
	}
	void initVect(int a, int b) {
		corX = a;
		corY = b;
	}
	mathVector addVector(mathVector vec1, mathVector vec2) {
		mathVector vec3;
		vec3.corX = vec1.corX + vec2.corX;
		vec3.corY = vec1.corY + vec2.corY;
		return vec3;
	}
	mathVector subVector(mathVector vec1, mathVector vec2) {
		mathVector vec3;
		vec3.corX = vec1.corX - vec2.corX;
		vec3.corY = vec1.corY - vec2.corY;
		return vec3;
	}
	void displayVec() {
		std::cout << "Solution: (" << corX << "," << corY << ")" << "\n";
		std::cin.get();
	}
private:
	int corX, corY;
};
