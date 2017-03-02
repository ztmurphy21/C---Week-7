//Bouncer Program
//Purpose: Determines if someone can enter the night club.
//CPT-180-27
//Programmer: Zachary Murphy on 3-1-2017

#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <string>


using namespace std;



int main() {
	//variables
	string yourName;
	int birthYear, waitYears, age;
	const int CURRENTYEAR = 2017;

	//intro
	cout << "*****************************************************************************\n";
	cout << "\t\t\tBouncer Program\n";
	cout << "You will enter your name and birth year.\n";
	cout << "The program will determine if you are old enough to enter night club.\n";
	cout << "*****************************************************************************\n\n";

	//get input
	cout << "Please enter your name: ";
	getline(cin, yourName);
	//get input
	cout << "Please enter your birth year: ";
	cin >> birthYear;
	//calc age
	age = CURRENTYEAR - birthYear;

	//output result
	cout << "\n";
	cout << "*****************************************************************************\n";
	cout << " \t\t\t Results: \n";
	if (age >= 21) {//if of age
		cout << yourName << " you may enter the club, please drink responsibly...\n";
	}
	else {//not of age, with some hope...
		waitYears = 21 - age;
		cout << yourName << " sorry you are not old enough to enter. \n";
		cout << "You will be able to enter in " << waitYears << " years.\n";
	}
	cout << "*****************************************************************************\n\n";

	//allow user to exit.
	cout << "Please press any key to exit...";
	_getch();
	return 0;

}