#include<stdio.h>

int main(void)
{
	int i = 1, num, tot = 1;
	
	printf("Enter positive number: ");
	scanf("%d", &num);
	while(i <= num)
	{
			tot = tot * i;
			i++;
	}
	printf("\nFacorial of %d! is: %d", num, tot);
}
