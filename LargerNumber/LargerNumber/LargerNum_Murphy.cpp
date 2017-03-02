//CPT-180
//Larger Number Program
//Purpose: Takes two numbers from user and will determine the larger of the two
//Programmer: Zachary Murphy on 3-1-2017

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main() {
	//vairbale declarations
	int numOne, numTwo;
	
	cout << "***********************************************************\n";
	cout << "\t\t\tLarger Number\n";
	cout << "You will be asked to input two numbers.\n";
	cout << "The program will determine which is the lager number.\n";
	cout << "***********************************************************\n\n";
	cout << "Please input the first number: ";
	cin >> numOne;
	cout << "Please input the second number: ";
	cin >> numTwo;
	cout << "\n";

	cout << "***********************************************************\n";
	cout << "\t\t\tResults:\n";
	cout << "You entered : " << numOne << " and " << numTwo << " \n";
	if (numOne > numTwo) {
		cout << numOne << " is greater than " << numTwo << " .\n";
	}
	else if (numTwo > numOne) {
		cout << numTwo << " is greater than " << numOne << " .\n";
	}
	else{
		cout << "Both numbers are of equal value.\n";
	}
	cout << "***********************************************************\n";

	cout << "Press any key to exit";
	_getch();

	return 0;

}