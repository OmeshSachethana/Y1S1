#include<stdio.h>

int main(void)
{
	int data[12] = {0};
	int i, max = 0, min = 0, month = 0;
	
	for(i = 0; i < 12; i++)
	{
	printf("Enter month %d rainfall: ", i + 1);
	scanf("%d", &data[i]);	
	}
	
	min = data[0];
	max = data[0];
	
	for(i = 1; i < 12; i++)
	{
		if(data[i] > max)
		{
			max = data[i];
			month = i;
		}
		if(data[i] < min)
		{	
			min = data[i];
		}				
	}
	printf("\nMonth %d has the highest rainfall of %d\n", month + 1, max);
	/*Need to update the the minimum variable*/
	return 0;	
}
