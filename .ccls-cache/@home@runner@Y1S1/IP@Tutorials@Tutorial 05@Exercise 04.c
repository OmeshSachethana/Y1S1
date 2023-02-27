//IT21143236
/* C program using forloops to display the following pattern on the screen.*/
#include<stdio.h>

int main()
{
	int i, j;
	for(i = 1; i <= 7; ++i)//Outer loop
	{
		for(j = 1; j <= i; ++j)//Inner loop
		printf("*");//Prompt	
		
		printf("\n");
	}
	for(i = 7; i >= 1; i -= 2)//Outer loop
	{
		for(j = 1; j <= i; ++j)//Inner loop
		
		printf("*");//Prompt	
		
		printf("\n");	
	}		

	return 0;
}
