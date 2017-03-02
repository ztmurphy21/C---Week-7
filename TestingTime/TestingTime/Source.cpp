#include <time.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {

	int day, month, year;
	time_t theTime;
	

	theTime = time(NULL);
	struct tm *aTime = localtime(&theTime);

	 day = aTime->tm_mday;
	month = aTime->tm_mon + 1; // Month is 0 - 11, add 1 to get a jan-dec 1-12 concept
	year = aTime->tm_year + 1900; // Year is # years since 1900

	cout << year;

	_getch();
	return 0;
}