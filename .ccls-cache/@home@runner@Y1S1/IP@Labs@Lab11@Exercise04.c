#include<stdio.h>
#include<string.h>
#define SIZE 20
int main(void)
{
	char name[SIZE];
	int length = 0, i;
	printf("Enter name: ");
	scanf("%s", name);
	
	
	length = strlen(name)-1;
	
	printf("Name in backwords: ");
	for(i = length; i >= 0; i--)
	{
		printf("%c", name[i]);
	}
}
