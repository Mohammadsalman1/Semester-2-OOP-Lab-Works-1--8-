#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <queue>

using namespace std;

class  Student
{
public:
	Student();
	Student(string, string, string, int);
	void getStudent();
	void displayStudent();
private:
	string name;
	string first_name;
	string group;
	int year_birth;
};

Student::Student()
{
	name = "";
	first_name = "";
	group = "";
	year_birth = 0;
}

Student::Student(string n, string fn, string grp, int birthy)
	: name(name), first_name(fn), group(grp), year_birth(birthy) {}

void Student::getStudent() 
{
	cout << "Name: ";
	cin >> this->name;
	cout << "First name: ";
	cin >> this->first_name;
	cout << "Group: ";
	cin >> this->group;
	cout << "Year of birth : ";
	cin >> this->year_birth;
}

void Student::displayStudent()
{
	cout << "Name: " << this->name << endl;
	cout << "First name: " << this->first_name << endl;
	cout << "Group: " << this->group << endl;
	cout << "Year of birth: " << this->year_birth << endl;
}

class Complex 
{
public:
	double real;
	double imaginary;
	Complex(double re = 0.0, double = 0.0);
	void printComplex();
	Complex sum(Complex);
	Complex diff(Complex);
	Complex mult(Complex);
};

Complex::Complex(double re, double img)
	: real(re), imaginary(img) {}

void Complex::printComplex()
{
	cout << real;
	if (imaginary < 0)	cout << " - ";
	else   cout << " + ";
	cout << abs(imaginary) << 'i' << endl;
}

Complex Complex::sum(Complex num)
{
	Complex comp_sum(0, 0);
	comp_sum.real = real + num.real;
	comp_sum.imaginary = imaginary + num.imaginary;
	return comp_sum;
}

Complex Complex::diff(Complex num)
{
	Complex comp_diff(0, 0);
	comp_diff.real = real - num.real;
	comp_diff.imaginary = imaginary - num.imaginary;
	return comp_diff;
}

Complex Complex::mult(Complex num) 
{
	Complex mult_cal(0, 0);
	mult_cal.real = (real * num.real) - (imaginary * num.imaginary);
	mult_cal.imaginary = (real * num.imaginary) + (imaginary * num.real);
	return mult_cal;
}

void fvector();
void flist();
void fqueue();

int main()
{
	fvector();
	flist();
	fqueue();
	cin.get();
}



void fvector()
{
	vector<Student> ls;

	ls.push_back(*(new Student()));
	ls.push_back(*(new Student("Fab", "Ishimwe", "MGBO-08-18", 1998)));
	ls.push_back(*(new Student("Winny", "Joselyn", "ITIT-12-14", 2003)));
	int i = 0;

	vector<Student>::iterator it = ls.begin();

	while (it != ls.end()) {
		ls.at(i).displayStudent();
		++it;
		++i;
	}
	ls.clear();
}

void flist() 
{
	int i = 0;

	list <Complex> lc;

	lc.push_back(*(new Complex(3.2, -4.1)));
	lc.push_back(*(new Complex(4.5, 9.1)));
	lc.push_back(*(new Complex(-5.4, 4.4)));

	list<Complex> ::iterator it = lc.begin();

	++it;
	lc.insert(it, 2, *(new Complex(-7.4, 1.6)));
	cout << "\n" << endl;

	while (!lc.empty()) {
		cout << "Z" << i << " = ";
		(lc.front()).printComplex();
		lc.pop_front();
		++i;
	}
	lc.clear();
}

void fqueue()
{
	int i = 0;

	queue <Complex> lq;

	lq.push(*(new Complex(3.2, -5.2)));
	lq.push(*(new Complex(-1.8, 3.1)));
	lq.push(*(new Complex(6.4, 2.5)));
	cout << "\n" << endl;

	while (!lq.empty()) {
		cout << "Z" << i << " = ";
		(lq.front()).printComplex();
		lq.pop();
		++i;
	}
}