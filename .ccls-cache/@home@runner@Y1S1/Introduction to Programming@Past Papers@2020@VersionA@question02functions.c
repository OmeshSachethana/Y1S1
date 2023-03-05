#include<stdio.h>
/*C program to calculate the increment given for the employees*/

float calcIncrement(float salary, int noofYearsWorked);
float calcTotalSalary(float salary, float increment);		//total salary = salary + increment

int main(void){
	int yearsWorked;	
	float sal;
	
	printf("Enter the salary: ");
	scanf("%f", &sal);
	printf("Enter no of years worked: ");
	scanf("%d", &yearsWorked);
	
	float increment = calcIncrement(sal, yearsWorked); 
	float total = calcTotalSalary(sal, increment);
	printf("Increment: %.2f\n", increment);
	printf("Total salary: %.2f\n", total);
	
}
float calcIncrement(float salary, int noofYearsWorked)
{
	if(noofYearsWorked > 2)
		return salary *= 0.1;
	else
		return 0;	
}
float calcTotalSalary(float salary, float increment)
{
	return salary + increment;
}
