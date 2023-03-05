#include<stdio.h>

int main()
{
	int number, i, j;
	printf("Enter Number: ");
	scanf("%d", &number);
	
	while(number == number){
		if(number < 0){
			printf("Invalid Number.");
			
	}
		else{
		
		for(i = 1; i <= number; i++){
			for(j = 1; j <= i; j++)
			
			printf("%d", i);
			printf("\n\n");
		}
		
		
	}
			printf("Enter Number: ");
			scanf("%d", &number);
	
		}
	
	
	
	
	
	return 0;	
}
