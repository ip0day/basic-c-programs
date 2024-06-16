#include <stdio.h>
int main() {
	char *days[]= { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	/*
	for(int i=1; i<=7; i++) {
		printf("%s ", days[i-1]);
	} */
	int start=0, end=6, sdate=6, find, cdate=1, cday=sdate;
	//scanf("%d", &find);
	//cdate=1;
	// printf("Day is: %s", days[cday]);
	
	// strat of main coding
	printf("Enter date: ");
	scanf("%d", &find);
	int count=0;
	while(cdate != find) {
		if(cdate==find) {
			printf("Today is: %s.", days[cday]);
			break;
		} else {
			//cdate++;
		}
		if(cday==end) {
				cday=start;
		}
		count++;
		cdate++;
		//printf("%d", cdate);
	}
	printf("Today is: %s.", days[cday]);
	printf("date is: %d", cdate);
	printf("count is: %d", count);
	return 0;
}
	// we can use while loop to find day: go untill find != zero.
