#include<stdio.h>
#include<string.h>
#define SIZE 25
int main(void)
{
	
	char string[SIZE];
	int length = 0, i;
	printf("Enter the string: ");
	scanf("%s", string);
	
	length = strlen(string);

	for(i = 0; i < length / 2; i++)
	{
		if(string[i] != string[length - 1 - i])
		{
			printf("%s is not a palindrome\n", string);
			return -1;
		}
	}
			printf("%s is palindrome\n", string);
}
