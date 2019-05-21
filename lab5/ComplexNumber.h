#pragma once

#include <iostream>
#include <math.h>
class complexNumber {
public:
	//constructor
	complexNumber(int x = 0, int y = 0) : re(x), img(y) {}

	//assignement operator 
	complexNumber& operator=(const complexNumber& comp);

	//comparison
	bool operator==(const complexNumber& comp) const {
		return re == comp.re && img == comp.img;
	}

	//input and output 
	friend std::ostream& operator<<(std::ostream&, const complexNumber&);
	friend std::istream& operator>>(std::istream&, complexNumber&);

	//increment and decrement 
	friend complexNumber& operator++(complexNumber&); //pre increment
	friend complexNumber operator++(complexNumber&, int); //post increment
	friend complexNumber& operator--(complexNumber&); //pre decrement
	friend complexNumber operator--(complexNumber&, int); //post decrement

	//addition and substractraction
	complexNumber operator+(complexNumber& num) {
		complexNumber sum(0, 0);
		sum.re = this->re + num.re;
		sum.img = this->img + num.img;
		return sum;
	}
	complexNumber operator-(complexNumber& num) {
		complexNumber sum(0, 0);
		sum.re = this->re - num.re;
		sum.img = this->img - num.img;
		return sum;
	}

private:
	int re, img;
};


complexNumber& complexNumber::operator=(const complexNumber& comp) {
	if (this->re == comp.re && this->img == comp.img) {
		return *this;
	}
	img = comp.img;
	re = comp.re;
	return *this;
}

std::ostream& operator<<(std::ostream& output, const complexNumber& comp) {
	output << comp.re << " " << comp.img << "i" << std::endl;
	return output;
}

std::istream& operator>>(std::istream& input, complexNumber& comp) {
	input >> comp.re >> comp.img;
	return input;
}

complexNumber& operator++(complexNumber& comp) {
	comp.re++;
	comp.img++;
	return comp;
}

complexNumber operator++(complexNumber& comp, int) {
	complexNumber oldcomp(comp.re, comp.img);
	comp.re++;
	comp.img++;
	return oldcomp;
}

complexNumber& operator--(complexNumber& comp) {
	comp.re--;
	comp.img--;
	return comp;
}

complexNumber operator--(complexNumber& comp, int) {
	complexNumber oldcomp(comp.re, comp.img);
	comp.re--;
	comp.img--;
	return oldcomp;
}
