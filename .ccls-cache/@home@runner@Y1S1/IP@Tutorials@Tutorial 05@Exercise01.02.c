
/*	Prompt the user to enter series of numbers from the keyboard and display the numbers*/
#include<stdio.h>

int main()
{

	int count = 0, number, total = 0;
	float average = 0;
	
	printf("Enter number: ");		//Prompt
	scanf("%d", &number);					//Enter number

	while(number >= 0)
	{	
		total += number;					//Total Calculation
		count++;							//Increment control
		printf("Enter number: ", number);	//Prompt
		scanf("%d", &number);				//Enter number	
	}
		average = (float)total / count;		//Average calculation
		printf("Total is %d and average is %.1f\n", total, average);

	return 0;
}
