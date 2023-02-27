#include<stdio.h>

int main()
{
	int angle1, angle2, angle3, sum = 0;
	
	printf("Enter the angle 01 value: ");
	scanf("%d", &angle1);				// Input angle 01 value
	
	printf("Enter the angle 02 value: ");
	scanf("%d", &angle2);				// Input angle 02 value
	
	printf("Enter the angle 03 value: ");
	scanf("%d", &angle3);				// Input angle 03 value


	sum = angle1 + angle2 + angle3;		// Calculation of 3 angles
	
	if(sum == 180)
		printf("\nTriangle can be formed\n");
	else
		printf("Triangle cannot be formed\n");	


	return 0;
}
