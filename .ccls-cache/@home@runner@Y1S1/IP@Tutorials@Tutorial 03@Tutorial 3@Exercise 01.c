//IT21143236
/*Enter the radius of a circle and displays
 the diameter, the circumference and the area. */
 
 #include<stdio.h>
 
 int main(){
 	
 	float radius, diameter = 0, circumference = 0, area = 0, pi = 22/7.0;
 	
 	printf("Enter radius: ");
 	scanf("%f", &radius);							//Input Radius
 	
 	diameter = 2 * radius;							//Calculate diameter
 	circumference = 2 * pi * radius;				//Calculate circumference
 	area = pi * radius * radius;					//Calculate area
 	
 	printf("Diameter is %.2f, circumference is %.2f and area is %.2f", diameter, circumference, area);
 	
 	return 0;
 }
