#include "Human.h"
#include "Student.h"
#include "Boss.h"
#include <iostream>

using namespace std;

int main()
{
	Human *student_x = new Student("Abbie", "Shehn", "Mohammad", 21, 1);
	Human *bos_x = new Boss("Alice", "Marie", "Johanson", 20, 5);
	student_x->print();
	cout << endl;
	bos_x->print();
	cin.get();
}