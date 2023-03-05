#include<stdio.h>
int main(void)
{
	int counter[9] = {0}, salary, i;
	int r1 = 200, r2 = 299;
	while(salary != -1)
	{
		printf("Enter salary: ");
		scanf("%d", &salary);
		if(salary >= 200 && salary <= 1500)
		{
			if(salary > 200 && salary <= 299)
			{
				counter[0]++;
			}
			else if(salary > 300 && salary <= 399)
			{
				counter[1]++;
			}
			else if(salary > 400 && salary <= 499)
			{
				counter[2]++;
			}
			else if(salary > 500 && salary <= 599)
			{
				counter[3]++;
			}
			else if(salary > 600 && salary <= 699)
			{
				counter[4]++;
			}
			else if(salary > 700 && salary <= 799)
			{
				counter[5]++;
			}
			else if(salary > 800 && salary <= 899)
			{
				counter[6]++;
			}
			else if(salary > 900 && salary <= 999)
			{
				counter[7]++;
			}
			else if(salary >= 1000 && salary <= 1500)
			{
				counter[8]++;
			}
		}
		else
			{
				printf("Invalid Input\n");
			}
	}
		for(i = 0; i < 8; i++)
		{
			printf("Salary between %d to %d: %d\n", r1, r2, counter[i]);
			r1 += 100;
			r2 += 100;	
		}
			printf("Salary between %d to %d: %d\n", 1000, 1500, counter[8]);
}
