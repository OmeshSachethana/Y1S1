/* C program to find area of a circle*/
#include<stdio.h>

float circleArea(float area);	//Function prototype
int main(void){	//main function
	
	float r = 0;
	
	printf("Enter the radius: ");	//Prompt
	scanf("%f", &r);	//Read the radius
	
	float result = circleArea(r);	//Calling function circle area
	printf("Area is: %.2f", result);//Prompt
}

float circleArea(float area)	//Called function	
{
	return 22/7.0 * (area * area);//Radius calculation
}
