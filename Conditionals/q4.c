/***
Write a C program to find whether a given year is a leap year or not.
Test Data : 2016
Expected Output :
2016 is a leap year.
***/
#include <stdio.h>
int main() {
	int year;
	scanf("%d", &year);
/*
A leap year is a year that is divisible by 4 (zero remainder).
If it is a century year (ending in 00), it must also be divisible by either 100 or 400 with (zero remainder)
to be considered a leap year.
*/
	if((year%4) == 0) {
		printf("%d is leap year.\n", year);
	} else if((year%100) == 0) {
		printf("%d is leap year.\n", year);
	} else if((year%400) == 0) {
		printf("%d is leap year.\n", year);
	} else {
		printf("%d is not a leap year.\n", year);
	}
	return 0;
}