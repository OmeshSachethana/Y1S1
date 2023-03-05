#include<stdio.h>

struct calcIncrement{
	
	float calcIncrement;
	float salary;
	int noOfYearsWorked;	
	
	}calcIncrements;

struct calcTotSalary{
	
	float calcTotSalary;
	float salary;
	float increment;		
	
	}calcTotSalary;

int main()
{
	printf("Enter salary: ");
	scanf("%f", &calcIncrements.salary);
	printf("Enter no of years worked: ");
	scanf("%d", &calcIncrements.noOfYearsWorked);
	
	if(calcIncrements.noOfYearsWorked > 2){
		calcIncrements.calcIncrement = calcIncrements.salary * 0.1;
		calcTotSalary.calcTotSalary = calcIncrements.salary + calcIncrements.calcIncrement;
		
	printf("Inrement: %f\n", calcIncrements.calcIncrement);	
	printf("Total salary: %f\n", calcTotSalary.calcTotSalary );
	}
	else
	
		printf("No increments");


	return 0;
}
