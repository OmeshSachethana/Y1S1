#include<stdio.h>
int main(void)
{
	int A[5] = { 10, 20, 30, 40, 50};
	int B[5] = { 34, 67, 12, 89, 12};
	int M[5] = {0}, i;
	
	printf("A = ");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t", A[i]);
	}
		printf("\nB = ");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t", B[i]);
	}
		printf("\nM = ");
	for(i = 0; i < 5; i++)
	{
		M[i] = A[i] * B[i];
		printf("%d\t", M[i]);
	}
		puts("");
}
