
/*C program to input an integer from the keyboard and convert the number into a positive number,
 if the user input is a negative value*/
#include<stdio.h>

int main()
{
	int number;
	
	printf("Enter an integer number: ");
	scanf("%d", &number);					//Enter integer number
	
	if(number>0)
		printf("Number is: %d\n", number);
		
	else
		printf("Number is: %d\n", -number);
	
	
	return 0;
}
