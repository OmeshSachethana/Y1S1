#include<stdio.h>

int main(void)
{
	int ratings[3][4], i ,j, sum, m = 0;
	float avgR = 0, max = 0;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Enter ratings for movie %d for reviwer %d: ", i + 1, j + 1);	
			scanf("%d", &ratings[i][j]);
		}
			printf("\n");
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{	
			printf("%d\t", ratings[i][j]);
		}
			printf("\n");
	}
		printf("\n");
	for(i = 0; i < 3; i++)
	{
		sum = 0;
		for(j = 0; j < 4; j++)
		{	
			sum = sum + ratings[i][j];
		}
			avgR = sum / 4.0;
			if(avgR > max)
			{
				max = avgR;
				m = i + 1;
			}
			printf("Average ratings for movie %d is %.2f", i + 1, avgR);
			printf("\n");
	}	
			printf("\nMovie %d has the highest average rating of %.2f", m, max);			
}
