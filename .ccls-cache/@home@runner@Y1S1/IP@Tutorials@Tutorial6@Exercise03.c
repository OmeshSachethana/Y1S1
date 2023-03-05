/* C program  to calculate the result of the following mathematical expression */

#include<stdio.h>
#include<math.h>

int add(int num1, int num2);	//Function prototype
int multiply(int num1, int num2);//Function prototype
int square(int num);//Function prototype

int main(void)
{
	int result = square(add(multiply(3, 4), multiply(5, 7)));	//Calculation of the result
	printf("Result is: %d", result);	//Prompt
}//end main function
int add(int num1, int num2)	//function to add 2 numbers
{
	return num1 + num2;	//assign value to result
}
int multiply(int num1, int num2)//function to multiply two numbers
{
	return num1 * num2;	//assign value to result
}
int square(int num)
{
	return pow(num, 2);	//assign value to result
}
