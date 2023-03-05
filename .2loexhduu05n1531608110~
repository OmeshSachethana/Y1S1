#include<stdio.h>

float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);
int main(void)
{
	int gra;
	float tHours;
	printf("Enter grade: ");
	scanf("%d", &gra);
	
	printf("Enter total number of hours: ");
	scanf("%f", &tHours);
	
	float salary = calculateWeeklySalary(gra, tHours);
	printDetails(gra, tHours, salary);
	return 0;
}
float calculateWeeklySalary(int grade, float hrsWorked)
{	
	if(hrsWorked <= 168){
		if(grade == 1)
			return 100 * hrsWorked;
		else if(grade == 2)
			return 200 * hrsWorked;
		else if(grade == 3)
			return 300 * hrsWorked;	
		else{}
}
	else
		printf("Invalid Number of hours\n");
}
void printDetails(int grade, float hrsWorked, float salary)
{
	printf("\nGrade: %d\nNumber of hours worked: %.2f\nWeek Salary: %.2f\n", grade, hrsWorked, salary);
}
