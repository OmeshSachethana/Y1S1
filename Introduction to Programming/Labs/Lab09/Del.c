#include<stdio.h>

int main(void)
{
	int units[3][4] = {0}, i, j, max = 0, id = 0, month = 0;
	
	for(i = 0; i < 3; i++)
	{
		printf("Details of Customer ID %d\n", i + 1);
		for(j = 0; j < 4; j++)
		{
			printf("Enter month %d units: ", j + 1);
			scanf("%d", &units[i][j]);
		}
			printf("\n");
	}
	max = units[0][0];	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(units[i][j] > max)
			{
				max = units[i][j];
				id = i + 1;
				month = i + j;
			}
		}
	}
		printf("For month %d customer ID %d has maximum electricity units of %d", month, id, max);	
}
