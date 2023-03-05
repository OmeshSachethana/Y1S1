/* C program to print points that user inputs a student�s average*/
#include<stdio.h>
#include<assert.h>

int qualityPoints(float avg); //Function prototype

int main(void)
{
	//assert statements
	assert(qualityPoints(95) == 4);
	assert(qualityPoints(85) == 3);
	assert(qualityPoints(75) == 2);
	assert(qualityPoints(65) == 1);
	assert(qualityPoints(55) == 0);
	// boundary conditions
	assert(qualityPoints(90) == 4);
	assert(qualityPoints(80) == 3);
	assert(qualityPoints(70) == 2);
	assert(qualityPoints(60) == 1);
	assert(qualityPoints(50) == 0);
	
	float average;
	printf("Enter Average: ");	//prompt
	scanf("%f", &average);	//Read the average
	printf("Points: %d\n", qualityPoints(average));	//prompt
	
}
int qualityPoints(float avg)	//Calling function
	{
		if(100 >= avg && avg >= 90)
			return 4;
		else if(89 >= avg && avg >= 80)
			return 3;
		else if(79 >= avg && avg >= 70)
			return 2;
		else if(69 >= avg && avg >= 60)
			return 1;
		else if(avg < 60)
			return 0;				
		return 0;
	}
		
