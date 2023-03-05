#include<stdio.h>

int main()
{
	int num, i = 1, sum;
	
	printf("Enter Number: ");
	scanf("%d", &num);
	
	while(num < 100 && i <= 10){
		
		if(num > 0){
		
		sum = num * i;
		printf("%d x %d = %d\n", num, i, sum);
		i++;
	}
		else{
			printf("Invalid Number.\n");
			printf("Enter Number: ");
			scanf("%d", &num);
			continue;		
		}				
	}
	return 0;
}
