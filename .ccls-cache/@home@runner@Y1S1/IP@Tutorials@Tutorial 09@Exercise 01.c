/*C program that enter a word, store it in an array and determine whether it is palindrome or not*/
#include <stdio.h>
#include <string.h>
#define SIZE 25

int main(){

    char string[SIZE];// declare array
    int i, length, temp = 0;
    
    printf("Enter a string: ");//prompt
    scanf("%s", string);//read the string
    
    length = strlen(string);//to find the length of the string
    
    for(i = 0; i < length; i++)
	{
        if(string[i] != string[length - i - 1])//condition to check
		{
            temp = 1;
            break;
   		}
	}
    if(temp)
	{
        printf("%s is not a palindrome", string);//output
    }    
    else
	{
        printf("%s is a palindrome", string);//output
    }
    return 0;
}
