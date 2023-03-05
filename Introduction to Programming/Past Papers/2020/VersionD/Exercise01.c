#include<stdio.h>

int main(void)
{
	// variable declaration
	int i, r, p, value = 1;
	
	// nested loop
	for (i = 2; i >= value; i--) {
		for (r = 2; r >= value; r--) {
			for (p = 2; p >= value; p--) {
				// print
				printf("[%d %d %d]\n", i, r, p);
			}
		}
	}
	return 0;
}
