#include<stdio.h>

int main()
{
	char gender;
	int age;
	
	printf("Enter age: ");
	scanf("%d", &age);
	
	
	if(age >= 65){
	
		printf("Enter gender (M - male and F - female): ");
		scanf(" %c", &gender);
		if(gender == 'M' || gender == 'm')
			printf("Senior Male");
		else
			printf("Senior Female");
}
	else
		printf("Age is should be above 65");			

	return 0 ;
}
