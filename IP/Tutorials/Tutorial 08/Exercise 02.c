/*C program to find the mean of the marks stored in the array*/
#include<stdio.h>

int main(void)
{
	int arr[10] = {0};
	int mark, i, sum = 0;
	float mean = 0;
	for(i = 0; i < 10;)
	{
		printf("Enter mark %d: ", i + 1);//Prompt
		scanf("%d", &mark);//Read the number
		if(mark < 20 && mark > 0) ////condition to check number is between 0 to 20
		{
			arr[i] = mark;
			i++;//increment
			sum = sum + mark;
		}	
	}
		printf("\n");
	for(i = 0; i <10; i++)
	{	
		printf("Marks stored: %d\n", arr[i]); //Marks stored in the array
	}
		mean = sum / 10.00; //To find the mean 
		printf("\nMean of marks: %.2f", mean);
	return 0;
}
