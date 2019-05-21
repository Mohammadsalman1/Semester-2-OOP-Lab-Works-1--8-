//OPERATOR OVERLOAD

#include "ComplexNumber.h"
#include "mathVector.h"



int main() {
	using std::cin;
	using std::cout;
	/*
	complexNumber a(2, 3), b, c;

	cout << a;
	b = a;
	cout << (b == a) << std::endl;
	c++;
	++a;
	cout << c << a;

	cin >> b;
	cout << b;
	cout << a + b;
	*/

	mathVector u(2, -5), v(-1, 3), w;

	cout << (u == v) << std::endl;
	u = v;
	cout << (u == v) << std::endl;
	cout << w;
	cout << "Enter a new vector: ";
	cin >> w;
	cout << w;
	
	cin.get();
	cin.get();
	cin.get();
	
}