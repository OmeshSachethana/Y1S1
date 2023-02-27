#include<stdio.h>

int multiply(int a, int b);
void printfTable(int num, int range);

int main(void)
{
	int n, ran;
	
	printf("Enter the number: ");
	scanf("%d", &n);
	
	printf("Enter the range: ");
	scanf("%d", &ran);	
	
	if(n < 0){
		printf("\nInput a positive number\n");
		return 0;
	}
	printfTable(n, ran);
	
	return 0;
}
int multiply(int a, int b)
{
		return a * b;
		
}
void printfTable(int num, int range)
{
	int i;
	
	for(i = 1; i <= range; i++)
	{
		printf("%d * %d = %d\n", num, i, multiply(num, i));
	}
}
