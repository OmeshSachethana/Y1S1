
/*A simple calculator*/
#include<stdio.h>

int main()
{
	float num1, num2, answer = 0;
	char ope;
	
	printf("Enter number 01: ");
	scanf("%f", &num1);				//Enter the 1st number
	printf("Enter operator: ");
	scanf(" %c", &ope);				//Enter the operator	
	printf("Enter number 02: ");
	scanf("%f", &num2);				//Enter the 2nd number
	
	
	if(ope == '+'){
		answer = num1 + num2;		//Addition calcuation
//		printf("\nAnswer is: %.2f\n", answer);
	}
	else if(ope == '-'){
		answer = num1 - num2;		//Subtraction calculation
//		printf("\nAnswer is: %.2f\n", answer);
	}
	else if(ope == '*'){			
		answer = num1 * num2;		//Multiplication calculataion
//		printf("\nAnswer is: %.2f\n", answer);
	}
	else if(ope == '/'){
		if (num2 == 0){
			printf("\nCannot be divided by 0\n");
		}
		else{
		answer = num1 / num2;		//Division calculation
//		printf("\nAnswer is: %.2f\n", answer);
	}
	}
	else 
		printf("Invalid operator\n");
		printf("\nAnswer is: %.2f\n", answer);
	return 0;
}
