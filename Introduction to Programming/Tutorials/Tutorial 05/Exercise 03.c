
/* C program to enter 4 module marks of 3 student 
	and calculate total and highest mark  */

#include<stdio.h>

int main()
{
	int modcount, modmark, total, stdcount, max = 0, id;
	
	stdcount = 1;			//Initializing student counter control variable
	while(stdcount <= 3)	//Outer loop
	{		
		modcount = 1;		//Initializing module counter control variable
		total = 0;
		while(modcount <= 4)//Inner loop
		{
			printf("Enter student ID %d module mark %d: ", stdcount, modcount);	//Enter module marks
			scanf("%d", &modmark);
			total += modmark;
			modcount++;		//Module count increment control
		}	
		
		printf("\nTotal marks for student ID %d all 4 modules: %d\n\n",stdcount, total);
	//	if(total > max)
	/*	{
			max = total;
			id = stdcount;
		}
			*/
			
		stdcount++;			//Student number increment control
	}
		printf("Student ID %d has the highest mark\n", id);
	return 0;
}
