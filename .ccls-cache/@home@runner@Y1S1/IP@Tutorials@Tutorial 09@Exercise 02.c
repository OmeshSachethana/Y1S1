/*C program that to add two matrixes and display output*/
#include<stdio.h>

int main(void)
{
	int a[4][4] = {{5, 7, 8, 10}, {9, 3, 0, 6}, {8, 1, 9, 2}, {4, 7, 2, 1}};//matrix A values
	int b[4][4] = {{2, 2, 1, 3}, {8, 1, 3, 1}, {1, 2, 2, 4}, {3, 1, 1, 2}};//matrix B values
	int sum[4][4], i, j;
	
	
	for(i = 0; i < 4; i++)//to access rows
	{
		for(j = 0; j < 4; j++)// to access columns
		{
			
			sum[i][j] = a[i][j] + b[i][j];// to find summation of matrix A and matrix B
			printf("%d\t", sum[i][j]);//output
		}	
			printf("\n");//new line
	}

}
