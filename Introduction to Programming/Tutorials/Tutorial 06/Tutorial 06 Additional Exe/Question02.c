/* C program   for  Black  Cabs  Transport  Company, to  calculate  the  total  amount  a particular  
customer should  pay  for  a  given  trip*/

#include<stdio.h>

int main()
{
	int pkg;
	float dist, amount;
	char cus;
	
	printf("Enter package number: ");
	scanf("%d", &pkg);
	do{
	
	if(pkg == 1){
		printf("Total distance: ");
		scanf("%f", &dist);
		if(dist > 1){
			amount = dist * 150;
		//	printf("Total Amount: %.f\n", amount);
		}
		else{
			amount = dist * 175;
		//	printf("Total Amount: %.f\n", amount);
		}	
	}	
	else if(pkg == 2){
		printf("Total distance: ");
		scanf("%f", &dist);
		amount = dist * 100;
	//	printf("Total Amount: %.f\n", amount);
	}
	else if(pkg == 3){
		printf("Total distance: ");
		scanf("%f", &dist);
		if(dist > 1){
			amount = dist * 150;
	//		printf("Total Amount: %.f\n", amount);
		}
		else{
			amount = dist * 130;
	//		printf("Total Amount: %.f\n", amount);	
	}
	}
	else if(pkg == 4){
		printf("Total distance: ");
		scanf("%f", &dist);
		if(dist > 1){
			amount = dist * 130;
	//		printf("Total Amount: %.f\n", amount);
		}
		else{
			amount = dist * 120;
	//		printf("Total Amount: %.f\n", amount);	
	}
	}
	else
		printf("Invalid Package Number\n");
		printf("Total Amount: %.f\n", amount);
		printf("Do you have more customers? (Y/N): ");
		scanf(" %c", &cus);
		printf("Enter package number: ");
		scanf("%d", &pkg);	
	}
		
	while(cus == 'Y' || cus == 'y');
		
	return 0;
}
