/***
Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.
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