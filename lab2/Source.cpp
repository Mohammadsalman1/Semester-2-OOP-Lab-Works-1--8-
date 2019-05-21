
/**************** PROGRAM 1 **************************************************
/A program that a user enters a string sentence and we count manually
/-longest word, -shortest, -how many words, consonants, and vowels
*****************************************************************************/

/****************** PROGRAM 2 ************************************************
/A function that receives an array are return it modified
/according to the following conditions:
/ Let S be the sum of elements of an array, and e1 the first element
/ of that array
/ if S = a1 => return an inverted array
/ if S < a1 => return array in increasing order
/ If S > a1 => return array in decreasing order 
*****************************************************************************/




#include<iostream>
#include<string>
#include<vector>
#include"Header.h"


int main()
{


	/*Driver code for program 1*/
	

	std::string enteredString;
	std::cout << "Enter any text you want.\n";
	std::getline(std::cin,enteredString);
	std::cout << "\n\n";
	std::vector<std::string> vec = stringToVector(enteredString, ' ');

	std::cout << "--Choose any of the option--\n"
		"1. Longest Word\n2. Shortest Word\n3.How many words\n"
		"4.How many consonants\n5.How many vowels\n";
	
	do {
		int choice;
		std::cout << "\n\n\nEnter your Choice | 0 TO QUIT | 9 TO SECOND PROGRAM : ";
		std::cin >> choice;
		switch (choice) {
		case 0:
			return 0;
			break;
		case 9: 
			goto program2;
			break;
		case 1:
			std::cout << "\nThe longest word is \"";
			satisfyUser(vec, longestWord);
			std::cout << "\"";
			break;
		case 2:
			std::cout << "\nThe shortest word is \"";
			satisfyUser(vec, shortestWord);
			std::cout << "\"";
			break;
		case 3:
			std::cout << "\nYou entered ";
			satisfyUser(vec, howManyWord);
			std::cout << " words";
			break;
		case 4:
			std::cout << "\nYou entered ";
			satisfyUser(vec, howManyCons);
			std::cout << " consonants";
			break;
		case 5:
			std::cout << "\nYou entered ";
			satisfyUser(vec, howManyVows);
			std::cout << " vowels";
			break;
		default:
			std::cout << "WRONG CHOICE! TRY AGAIN";
			break;
		}
	} while (true);


	program2:
	/*Driver code for program 2*/

	int sum = 0, n = 11;
	int arrNum[] = { 3, 1, -4, 8, -4, -1, -3, 0, 0, -1, 3 };
	for (int i = 0; i < n; i++) {
		sum += arrNum[i];
	}
	if (sum == arrNum[0])
		arrComp(arrNum, n, equalSum);
	else if (sum > arrNum[0])
		arrComp(arrNum, n, greaterSum);
	else
		arrComp(arrNum, n, lesserSum);

	
	std::cin.get();
	std::cin.get();
}

