#include<stdio.h>

int main(void)
{
	int mark[3][3], i, j, sum;
	float avg = 0;
	
	for(i = 0; i < 3; i++)
	{
		printf("Enter marks of Student ID %d\n", i + 1);
		
		for(j = 0; j < 3; j++)
		{
			printf("Enter mark %d: ", j + 1);
			scanf("%d", &mark[i][j]);
			
		}
			
			puts("");	
	}
	printf("StudentNo\t\tExamScores\t\tAverage\n");

	for(i = 0; i < 3; i++)
	{
		printf("%d\t\t\t", i + 1);
		sum = 0;
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", mark[i][j]);
			sum = sum + mark[i][j];
		}
			avg = sum / 3.0;
			printf("%.2f", avg);
			printf("\n");	
	}
	
}
