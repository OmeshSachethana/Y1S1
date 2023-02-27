#include<stdio.h>

int main()
{
	int type, persons;
	float totalCost;
	

	printf("Enter Package Type(1, 2, 3): ");
	scanf("%d", &type);

	printf("Enter Number of Persons: ");
	scanf("%d", &persons);

	switch(type){
		case 1:		totalCost = 2000.0 * persons;
					printf("Total cost = %.2f", totalCost);		break;
		
		case 2: 	totalCost = 5000.0 * persons;
					printf("Total cost = %.2f", totalCost);		break;
					
		case 3:		totalCost = 7000.0 * persons;
					printf("Total cost = %.2f", totalCost);		break;
											
		default:	printf("Invalid Package Type");				break;
	}


	return 0;
}
