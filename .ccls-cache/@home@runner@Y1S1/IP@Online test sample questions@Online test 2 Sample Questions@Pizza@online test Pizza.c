#include<stdio.h>

int main(void){
	
	int pType, qty;
	float total, discount;
	
	printf("Pizza Type\tPrize of a Pizza\tDiscount\n");
	printf("1\t\tRs. 1000.00\t\t10%\n");
	printf("2\t\tRs. 1600.00\t\t12%\n");
	printf("3\t\tRs. 1400.00\t\t15%\n\n");
	
	printf("Enter Pizza Type: ");
	scanf("%d", &pType);
	
	while(pType != -1){
		
		if(pType == 1){
			printf("Enter Quantity: ");
			scanf("%d", &qty);
			if(qty > 3){
				discount = (1000 * qty) * 0.10;
				total = (1000 * qty) - discount;
				printf("Total Price: %.2f\n", total);
			}
			else{
			
				total = 1000 * qty;
				printf("Total Price: %.2f\n", total);
			}
		}
		else if(pType == 2){
			printf("Enter Quantity: ");
			scanf("%d", &qty);
			if(qty > 3){
				discount = (1600 * qty) * 0.12; 
				total = (1600 * qty) - discount;
				printf("Total Price: %.2f\n", total);
			}
			else{
			
				total = 1600 * qty;
				printf("Total Price: %.2f\n", total);
			}
		}
		else if(pType == 3){
			printf("Enter Quantity: ");
			scanf("%d", &qty);
			if(qty > 3){
				discount = (1400 * qty) * 0.15;
				total = (1400 * qty) - discount;
				printf("Total Price: %.2f\n", total);
			}
			else{
			
				total = 1400 * qty;
				printf("Total Price: %.2f\n", total);
			}		
	}
		else{
		}	
		printf("\nEnter Pizza Type: ");
		scanf("%d", &pType);	
}
		
}
