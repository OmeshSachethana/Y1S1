#include<stdio.h>

float circleArea(float radius);
float circlePeri(float radius);
float recArea(float length, float width);
int main(void)
{
	float h, r, length, width;
	printf("Enter the height: ");
	scanf("%f", &h);
	printf("Enter the radius: ");
	scanf("%f", &r);
	
	float cArea = circleArea(r);
	float cPeri = circlePeri(r);
	float rRect = recArea(length, width); 
	
	printf("Area of the cyclinder: %.2f", cPeri* h + 2 * cArea); 
			
}
float circleArea(float radius)
{
	return 22/7.0 * radius * radius;
}
float circlePeri(float radius)
{
	return 2 * 22/7.0 * radius;
}
float recArea(float length, float width)
{
	return 2 * (length + width);
}

