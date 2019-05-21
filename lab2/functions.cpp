#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include"Header.h"


/*ALL FUNCTIONS DEFINITIONS*/

/*Program 1*/
std::vector<std::string> stringToVector(std::string str, char separator) {
	std::string strIndiv;
	std::vector<std::string> vecWords;
	std::stringstream ss(str);
	while (getline(ss, strIndiv, separator)) {
		vecWords.push_back(strIndiv);
	}
	return vecWords;
}

std::string longestWord(std::vector<std::string> vec) {
	unsigned int longStrChar = vec[0].length();
	std::string longStr = vec[0];
	for (auto singleWord : vec) {
		if (singleWord.length() > longStrChar) {
			longStr = singleWord;
			longStrChar = singleWord.length();
		}
	}
	return longStr;
}
std::string shortestWord(std::vector<std::string> vec) {
	unsigned int shortStrChar = vec[0].length();
	std::string shortStr = vec[0];
	for (auto singleWord : vec) {
		if (singleWord.length() < shortStrChar) {
			shortStr = singleWord;
			shortStrChar = singleWord.length();
		}
	}
	return shortStr;
}

std::string howManyWord(std::vector<std::string> vec) {
	return std::to_string(vec.size());
}


bool isConsonant(char ch, int c) {
	// To handle lower case 
	ch = toupper(ch);
	bool ret;
	if(c == 0) ret = !(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' ||
		ch == 'U') && ch >= 65 && ch <= 90;
	else if(c == 1) ret = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' ||
		ch == 'U') && ch >= 65 && ch <= 90;

	return ret;
}

int totalConsonants(std::string s, int x) {
	int count = 0;
	for (unsigned int i = 0; i < s.length(); i++)
		// To check is character is Consonant 
		if (isConsonant(s[i],x))
			++count;
	return count;
}


std::string howManyCons(std::vector<std::string> vec) {
	int count = 0;
	for (auto h : vec) {
		count += totalConsonants(h,0);
	}
	return std::to_string(count);
}

std::string howManyVows(std::vector<std::string> vec) {
	int count = 0;
	for (auto h : vec) {
		count += totalConsonants(h,1);
	}
	return std::to_string(count);
}



void satisfyUser(std::vector<std::string> v,
	std::string(*s)(std::vector<std::string>)) {
	std::cout << s(v);
}



/*Program 2*/

/*Function to ride the program*/
void arrComp(int* arr, int n, void(*p_funct)(int*, int)) {

	p_funct(arr, n);
	printArr(arr, n);
}

/*Function to swap two numbers*/
void swap(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}
/* Function to sort an array using insertion sort*/
void insertionSort(int *arr, int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

/*Function to print elements in array*/
void printArr(int* a, int n) {
	std::cout << "\n";
	for (int i = 0; i < n; i++)
		std::cout << a[i] << "\t";
	std::cout << "\n";
}

/*what happens if the conditions are satisfied*/

void equalSum(int* arr, int n) {
	for (int i = n - 1, end = 0; i >= end; i--, end++) {
		swap(arr[i], arr[end]);
	}
}

void greaterSum(int* arr, int n) {
	insertionSort(arr, n);
	for (int i = n - 1, end = 0; i >= end; i--, end++) {
		swap(arr[i], arr[end]);
	}
}
void lesserSum(int* arr, int n) {
	insertionSort(arr, n);
}

