#include "Stalast.h"

Stalast::Stalast()
	: Student() {
	heightinCM = 0.0f;
	weightinKG = 0.0f;
}

Stalast::Stalast(const char* f, const char* g, const char* n,
	unsigned int a, Gender s)
	: Student(f, g, n, a, s) {
	heightinCM = 0.0f;
	heightinCM = 0.0f;
}

Stalast::Stalast(const char* f, const char* g, const char* n,
	unsigned int a, Gender s, float h, float w)
	: heightinCM(h), weightinKG(w) {
	Student(f, g, n, a, s);
}

void Stalast::setHeight(float height) {
	heightinCM = height;
}

void Stalast::setWeight(float weight) {
	weightinKG = weight;
}

void Stalast::getInfoStal() {
	print();
	std::cout << "\n" << "Height: " << heightinCM << "\nWeight: "
		<< weightinKG << std::endl;
}