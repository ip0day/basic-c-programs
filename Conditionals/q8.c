/***
Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three
***/
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if(a==b) {
		printf("Both are equal.\n");
	}
	return 0;
}