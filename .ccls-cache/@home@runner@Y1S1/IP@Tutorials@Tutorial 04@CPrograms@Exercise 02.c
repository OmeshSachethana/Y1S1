//IT21143236
/*write a C program to update the bank balance of a customer based on the 
transactions performed (withdrawals/ deposits) by the customer. */

#include<stdio.h>

int main(){
	float balance, amount;
	char type;
	
	printf("Please enter transaction type (W - Withdrawal / D - Deposit): ");	//Select transcation type
	type = getchar();
	
	if(type == 'W' || type == 'w'){
		printf("You have selected to withdraw money\n");
		printf("Enter the bank balance: ");		
		scanf("%f", &balance);								//Input bank balance
		printf("Enter withdraw amount: ");
		scanf("%f", &amount);								//Input withdraw amount
		if (balance >= amount){
			balance = balance - amount;						//Calculation of balance
			printf("\nThe new balance is: %.2f\n", balance);//New balance
		}
		else
			printf("Insufficient bank balance");
		}
	else if(type == 'D' || type == 'd'){
		printf("You have selected to deposit money\n");
		printf("Enter the bank balance: ");				
		scanf("%f", &balance);								//Input bank balance
		printf("Enter the deposit amount: ");
		scanf("%f", &amount);								//Input deposit amount
		
		balance = balance + amount;							//Caluation of balance
		
		printf("\nThe new balance is: %.2f\n", balance);	//New balance
	}
	else
		printf("\nYou have selected an invalid transaction type");
}
