/* C program to display hypotenuse of a triangle */
#include<stdio.h>
#include<assert.h>
#include<math.h>

double hypotenuse(double side1, double side2);	//Function prototype
void testHypotenuse();
int main(void)
{
	void testHypotenuse();	//Assert statement
	
	double s1, s2;
	
	printf("Enter length of side 1: "); //Prompt
	scanf("%lf", &s1);	//Read side 01
	printf("Enter length of side 1: ");	//Prompt
	scanf("%lf", &s2);	//Read side 01
	
	printf("\nHypotenuse of triangle: %.2f\n", hypotenuse(s1, s2)); 
}
double hypotenuse(double side1, double side2) //Called function
{
	return sqrt(pow(side1, 2) + pow(side2, 2));
}
void testHypotenuse()
{
	//assert statements
	assert(fabs(hypotenuse(3, 4) - 5) < 0.01);
	assert(fabs(hypotenuse(5, 12) - 13) < 0.01);
	assert(fabs(hypotenuse(15, 8) - 17) < 0.01);
	
}
