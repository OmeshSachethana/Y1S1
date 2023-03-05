
/*Enter the mark obtained for IP module and display the grade*/

#include<stdio.h>

int main ()
{
	int mark;
	
	printf("Enter the mark: ");
	scanf("%d", &mark);
		
	if(mark>=80){
		printf("Your mark %d is Grade A\n", mark);
		printf("Weldone!\n");
	}
	else if(mark>=70)
		printf("Your mark %d is Grade B\n", mark);
	else if(mark>=45)
		printf("Your mark %d is Grade C\n", mark);
	else{
		printf("Your mark %d is Grade F\n", mark);
		printf("Please try again\n");
	}
					

	return 0;	
}
