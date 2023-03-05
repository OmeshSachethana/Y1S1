#include<stdio.h>

int main(){
	
	int empno, counter;
	float salary = 0, bonus = 0;
	
	printf("Enter the employee number: ");
	scanf("%d", &empno);
	
	printf("Enter the basic salary: ");
	scanf("%f", &salary);
	
	counter = 1;
	while(empno != -1){
	
	if(salary < 100000){
		bonus = salary * 0.75;
		printf("Bonus amount: %.2f\n", bonus);	
	}
	else if(salary > 100000){
		bonus = salary * 0.50;
		printf("Bonus amount: %.2f\n", bonus);
	}
	
	printf("Enter the employee number: ");
	scanf("%d", &empno);
	
	printf("Enter the basic salary: ");
	scanf("%f", &salary);
	counter++;
	
}
			
			
	return 0;
}
