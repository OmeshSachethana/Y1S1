/*C program to rotate  the  values  of  the  array  by  one  position  in  the forward direction and display the values*/
#include<stdio.h>
int main(void)
{
	int motion[5] = {0};
	int i, temp;
	
	for(i = 0; i < 5; i++){
		printf("Enter integer values: ");//prompt
		scanf("%d", &motion[i]);//read the values
	}
	printf("\n");//new line
	
	for(i = 0; i < 5; i++){
		printf("%d\t", motion[i]);
	}
	//Rotate the values
	temp = motion[0];
	for(i = 0; i < 5; i++){
		motion[i] = motion[i + 1];
	}
	motion[4] = temp;
	printf("\n");
	
	for(i = 0; i < 5; i++){
		printf("%d\t", motion[i]);
		
	}
	return 0;
}
