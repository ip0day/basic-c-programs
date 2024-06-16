/***
Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer
***/
#include <stdio.h>
int main() {
	int number, remainder;
	scanf("%d", &number);
	//remainder = number%2;
	//if(remainder == 0) {
	if(number%2 == 0) {
		printf("Even number.\n");
	} else {
		printf("Odd number.\n");
	}
	return 0;
}