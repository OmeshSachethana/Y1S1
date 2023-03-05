/* C program to store marks and print data in an array*/
#include<stdio.h>

int main(void)
{
	int arr[10] = {0};
	int mark, i;
	for(i = 0; i < 10;)//to read values from the user
	{
		printf("Enter mark %d: ", i + 1);	//prompt
		scanf("%d", &mark); //Read the marks
		if(mark < 20 && mark > 0)//condition to check number is between 0 to 20
		{
			arr[i] = mark;	
			i++;	//increment
		}	
	}
		printf("\n");//new line
	for(i = 0; i <10; i++) //to print the values stored
	{	
		printf("Marks stored: %d\n", arr[i]);	//marks stored
	}
	return 0;
}
