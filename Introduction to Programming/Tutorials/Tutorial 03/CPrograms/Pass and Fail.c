#include<stdio.h>

int main()
{

	int mark;
	
	printf("Enter the mark of the subject: ");
	scanf("%d", &mark);
	
	if(mark>45){
		printf("You have passed\n");
		printf("Great job!\n");
	}
	else{
		printf("You failed\n");
		printf("Try again\n");
	}

	return 0;
}
