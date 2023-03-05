#include<stdio.h>

int main(void)
{
	int num[5] = {0}, i, rep, count = 0;
	
	printf("Enter values to the array: \n");
	for(i = 0; i < 5; i++){
	scanf("%d", &num[i]);
}
	printf("\nEnter the number: ");
	scanf("%d", &rep);
	for(i = 0; i < 5; i++){
		if(rep == num[i])
			count++;
	}
	if(count >= 2){
		printf("Number repeated %d times\n", count);
}
	else if(count == 1){
		printf("Number not repeated\n");		
	}
	else
		printf("Number not found\n");
	
}
