#pragma once

#include <iostream>
#include <math.h>
class complexNumber {
public:
	complexNumber() {
		re = 0;
		img = 0;
	}
	complexNumber(int x, int y) {
		re = x;
		img = y;
	}
	complexNumber(const complexNumber &o) {
		re = o.re;
		img = o.img;
	}
	~complexNumber() {
		std::cout << "Object was destroy\n\n";
	}
	void getNumber(int, int);
	int calModulus();
private:
	int re, img;
};

void complexNumber::getNumber(int a, int b) {
	re = a;
	img = b;
}

int complexNumber::calModulus() {
	int mod;
	mod = sqrt(pow(re, 2) + pow(img, 2));
	return mod;
}