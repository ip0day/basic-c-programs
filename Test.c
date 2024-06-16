#include <stdio.h>
void f1() {
	printf("Calling f1 function.\n");
	printf("Intermediate........\n");
	printf("Ending f1 function..\n");
}

int main() {
	printf("The 5+5 is: %d.\n", 5+5);
	f1();
	f1();
	printf("The 11-5 is: %d.\n", 11-5);
	f1();
	f1();
	f1();
	printf("The 5*5 is: %d.\n", 5*5);
	return 0;
}