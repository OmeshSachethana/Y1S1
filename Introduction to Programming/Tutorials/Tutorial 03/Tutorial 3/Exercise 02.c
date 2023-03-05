
/* When user inout 5 digit number and prints the digits separated from one another */

#include<stdio.h>

int main(){
	
	
	int digit1, digit2, digit3, digit4, digit5;
	int number = 0;
	
	printf("Enter 5 digit number: ");
	scanf("%d", &number);			//Input 5 digit number
	
//	digit1 = number / 10000;			
//	digit2 = number % 10000 / 1000;
//	digit3 = number % 1000 / 100;
//	digit4 = number % 100 / 10;
	digit5 = number % 10 ;
		
	printf("%d\t%d\t%d\t%d\t%d", digit1, digit2, digit3, digit4, digit5);
	
		
	return 0;
}
