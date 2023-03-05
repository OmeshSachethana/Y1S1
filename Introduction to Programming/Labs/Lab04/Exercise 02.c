#include<stdio.h>

int main()
{
	float width, length, base, height, radius, area, pi = 22/7.0;
	char shape;
	printf("Enter the first character of the shape: ");
	scanf("%c", &shape);
	
	if (shape == 'R'){
		printf("Enter the width: ");
		scanf("%f", &width);
		printf("Enter the length: ");
		scanf("%f", &length);
		area = length * width;
	
		printf("Area of rectangle is: %.2f\n", area);
	}
	else if(shape == 'T'){
		printf("Enter the base: ");
		scanf("%f", &base);
		
		printf("Enter the height: ");
		scanf("%f", &height);
		
		area = (base * height)/ 2.0;
		
		printf("Area of triangle is: %.2f\n",  area );
	}
	else if(shape == 'C'){
		printf("Enter radius: ");
		scanf("%f", &radius);
		
		area = pi * radius * radius;
		
		printf("Area of circle is: %f\n", area);
	}
	else
		printf("invalid");
	
	return 0;
}
