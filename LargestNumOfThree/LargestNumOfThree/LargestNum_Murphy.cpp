//CPT-180
//Determine the Largest of Three Numbers
//Purpose: Takes three numbers from user and will determine the larger of the two
//Programmer: Zachary Murphy on 3-1-2017

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main() {
	//vairbale declarations
	int numOne, numTwo, numThree;

	//intro
	cout << "****************************************************************************\n";
	cout << "\t\t\tLarger Number\n";
	cout << "You will be asked to input three numbers of different value.\n";
	cout << "The program will determine which is the lager number.\n";
	cout << "The program will issue an error if any numbers values are the same.\n";
		cout << "****************************************************************************\n";

	//get input
	cout << "Please input the first number: ";
	cin >> numOne;
	cout << "Please input the second number: ";
	cin >> numTwo;
	cout << "Please input the third number: ";
	cin >> numThree;
	cout << "\n";

	//output result
	cout << "****************************************************************************\n";
	cout << "\t\t\tResults:\n";
	cout << "You entered : " << numOne << " , " << numTwo << " , and " << numThree << " \n";
	if (numOne == numTwo || numOne == numThree) {//error checking
		cout << "ERROR: You must input numbers of different values.\n";
	}
	else if (numOne > numTwo && numOne > numThree) {//numone is greater
		cout << numOne << " is greater than " << numTwo << " and " << numThree << " .\n";
	}
	else if (numTwo > numOne && numTwo > numThree) {//numtwo is greater
		cout << numTwo << " is greater than " << numOne << " and " << numThree << " .\n";

	}
	else {//numthree is greater
		cout << numThree << " is greater than " << numOne << " and " << numTwo << " .\n";
	}

	cout << "****************************************************************************\n";

	cout << "Press any key to exit...";
	_getch();

	return 0;

}