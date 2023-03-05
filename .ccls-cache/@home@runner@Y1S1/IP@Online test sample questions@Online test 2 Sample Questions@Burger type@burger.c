#include<stdio.h>

int main(){

	int type, m;
	float qty, totalP = 0;
	
	printf("Enter Burger Type : ");
	scanf("%d", &type);
	
	do{
		if(type == 1){
			printf("Enter Quantity : ");
			scanf("%f", &qty);
			totalP = qty * 500;
			
		}
		else if(type == 2){
			printf("Enter Quantity : ");
			scanf("%f", &qty);
			totalP = qty * 550;
			
		}
		else if(type == 3){
			printf("Enter Quantity : ");
			scanf("%f", &qty);
			totalP = qty * 600;
			
		}
		else
			break;
			printf("Total Price : %.2f\n\n", totalP);
			
			printf("Enter Burger Type : ");
			scanf("%d", &type);
			
		
		
	}while(type != m);
		
	return 0;
}


