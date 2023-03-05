#include<stdio.h>
float findRadianValue(float angleInDegrees);
void printRadianValues(void);
int main(void)
{
	
	printRadianValues();
		
	return 0;
}

//radian = pi/180*degrees
float findRadianValue(float angleInDegrees)
{
	float pi = 22/7.0;
	return pi / 180 * angleInDegrees;
}
void printRadianValues(void)
{
	int a;
	printf("Angles(degrees)\tAngles(Radians)\n");
	for(a = 100; a <= 200; a += 20)
	printf("%d\t\t%f\n", a, findRadianValue(a));
}
