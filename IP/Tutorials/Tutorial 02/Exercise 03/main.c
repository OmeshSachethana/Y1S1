
#include <stdio.h>


int main() {
	
	
	int mark1, mark2, total = 0;
	float avg;
	
	printf("Please enter mark 1: ");
	scanf("%d", &mark1);						// input mark 01
	
	printf("Please enter mark 2: ");
	scanf("%d", &mark2);						// input mark 02
	
	total = mark1 + mark2;						// calculate total
	avg = total / 2.0;
	
	printf("Total is: %d\n", total);	// display total
	printf("Average is: %f\n", avg);
	
	return 0;
}
