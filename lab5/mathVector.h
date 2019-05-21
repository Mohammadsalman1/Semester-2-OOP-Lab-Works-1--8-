#pragma once

#include <iostream>

class mathVector {
public:
	mathVector(int a = 0, int b = 0) {
		corX = a;
		corY = b;
	}
	//assignement operator 
	mathVector& operator=(const mathVector& comp);

	//comparison 
	bool operator==(const mathVector& comp) const {
		return corX == comp.corX && corY == comp.corY;
	}

	//input and output | ввод и вывод
	friend std::ostream& operator<<(std::ostream&, const mathVector&);
	friend std::istream& operator>>(std::istream&, mathVector&);

	//addition and substractraction
	mathVector operator+(mathVector& num) {
		mathVector sum(0, 0);
		sum.corX = this->corX + num.corX;
		sum.corY = this->corY + num.corY;
		return sum;
	}
	mathVector operator-(mathVector& num) {
		mathVector sum(0, 0);
		sum.corX = this->corX - num.corX;
		sum.corY = this->corY - num.corY;
		return sum;
	}

private:
	int corX, corY;
};


mathVector& mathVector::operator=(const mathVector& comp) {
	if (this->corX == comp.corX && this->corY == comp.corY) {
		return *this;
	}
	corY = comp.corY;
	corX = comp.corX;
	return *this;
}

std::ostream& operator<<(std::ostream& output, const mathVector& comp) {
	output << comp.corX << " " << comp.corY << "i" << std::endl;
	return output;
}

std::istream& operator>>(std::istream& input, mathVector& comp) {
	input >> comp.corX >> comp.corY;
	return input;
}