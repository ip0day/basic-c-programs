/***
Read an integer value m from the user.
Based on the value of m:
If m is greater than 0, set the value of another integer n to 1.
If m is equal to 0, set the value of n to 0.
If m is less than 0, set the value of n to -1.
Display the value of n based on the conditions above.
***/
#include <stdio.h>
int main() {
	int m, n;
	scanf("%d", &m);
	if(m>0) { n=1; }
	if(m<0) { n=-1; }
	if(m==0) { n=0; }
	printf("The value of n is: %d.", n);
	return 0;
}