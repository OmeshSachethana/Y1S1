#include<stdio.h>


int main()
{

	int num, people, sum;

	printf("Enter the package number: ");
	scanf("%d", &num);		//Input a number from 1-3
	
	switch(num){
		case 1: 	printf("Horse ride\n");
					printf("Cost per person is: 2000/=\n");
					printf("Enter the number of people: ");
					scanf("%d", &people);
					sum = 2000 * people;
					printf("Amount is: %d", sum);	break;
						
		case 2: 	printf("Scuba Diving");	
					printf("Cost per person is: 5000/=\n");
					printf("Enter the number of people: ");
					scanf("%d", &people);
					sum = 5000 * people;
					printf("Amount is: %d", sum);	break;
					
		case 3: 	printf("Water Rafting\n");		
					printf("Cost per person is: 7000/\n");
					printf("Enter the number of people: ");
					scanf("Amount is: %d", &people);
					sum = 7000 * people;
					printf("%d\n", sum);	break;
					
		default:	printf("Invalid output\n");
	}
	return 0;
}
