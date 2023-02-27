/*C program to find the product and display  the total sales*/
#include<stdio.h>

int main(void)
{
	//declare array
	float sales[5][4], sum;
	int i, j;
	
	for(i = 0; i < 5; i++)//to store values to the array
	{
		for(j = 0; j < 4; j++)
		{
			printf("Enter dollar value for product %d for sales person %d: ", i + 1, j + 1);//prompt
			scanf("%f", &sales[i][j]);//read values to the array
		}
		printf("\n");//new line
	}
	for(i = 0; i < 5; i++)//to find total sales and to display
	{
		sum = 0;
		for(j = 0; j < 4; j++)
		{
			sum += sales[i][j];//calculation of sales for products
		}
		printf("Total sales for product %d: %.2f\n", i + 1, sum);//Output for total sales
	}
	return 0;
}// end main function
