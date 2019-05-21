#pragma once

/*Prototypes*/

std::vector<std::string> stringToVector(std::string str, char separator);
std::string longestWord(std::vector<std::string>);
std::string shortestWord(std::vector<std::string>);
std::string howManyWord(std::vector<std::string>);
std::string howManyCons(std::vector<std::string>);
std::string howManyVows(std::vector<std::string>);
bool isConsonant(char, int);
int totalConsonants(std::string, int);

void satisfyUser(std::vector<std::string> v,
	std::string(*s)(std::vector<std::string>));


void insertionSort(int*, int);
void arrComp(int*, int, void(*p_funct)(int*, int));
void equalSum(int*, int);
void greaterSum(int*, int);
void lesserSum(int*, int);
void swap(int&, int&);
void printArr(int*, int);