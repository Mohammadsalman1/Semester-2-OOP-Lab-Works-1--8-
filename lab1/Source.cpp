#include <iostream>
#include <string>
#include <fstream>
#include "Header.h"

using namespace std;


int main()
{
	fstream iofile;
	string lineInput;
	UserComplex Num1, Num2;
	char oper;

	iofile.open("complexNumbers.txt", ios::trunc | ios::out | ios::in);
	for (int i = 0; i <= 1; i++)
	{
		cout << "Enter commplex number " << i <<" (ex: -a +bi): ";
		getline(cin, lineInput);
		iofile << lineInput << endl;
	}
	iofile.seekg(0, ios::beg);

	
	getline(iofile, lineInput);
	Num1.inputComplex(lineInput);
	cout << "\nChoose an operator (+, -, *, /): ";
	cin >> oper;
	cout <<"\n(" << lineInput << ") ";
	getline(iofile, lineInput);
	cout << oper <<" (" << lineInput << ") ";
	Num2.inputComplex(lineInput);
	
	iofile.close();
	
	calculate(Num1, Num2, oper);  
		
	cin.get();
	cin.get();
}