//IT21143236
/*C program  to store the appointment details of their patients in a medical center*/

#include<stdio.h>
//main function
int main(void)
{
	char name[10], type;
	int i, c = 0, s = 0, t = 0;
	FILE *p;
	
	p = fopen("appointment.dat", "w");//file open
	
	if(p == NULL)//to check whether file cannot be open
	{
		printf("File cannot be open");
		return -1;
	}
	
	for(i = 0; i < 5; i++)
	{
		printf("Enter patient name: ");//prompt
		scanf("%s", name);//read the name
		printf("Enter appointment type(C, S, T): ");//prompt
		scanf(" %c", &type);//read the type
		fprintf(p, "%s\t%c\n", name, type);
	}
		fclose(p);//file close
	
	p = fopen("appointment.dat", "r");//reading mode
	
	if(p == NULL)//to check whether file cannot be open
	{
		printf("File cannot be open");
		return -1;
	}
	
	fscanf(p, "%s\t%c", name, &type);
	
	while(!feof(p))//to read until end of the file
	{
		if(type == 'C')
		{
			c++;
		}
		else if(type == 'S')
		{
			s++;
		}
		else if(type == 'T')
		{
			t++;
		}
		fscanf(p, "%s\t%c", name, &type);	
	}
		printf("\nAppointment type\tNumber of Patients\n");
		printf("Consulting%15d\nScanning%17d\nTesting%18d\n", c, s, t);
		//printf("Consulting\t\t%d\nScanning\t\t%d\nTesting\t\t\t%d\n", c, s, t);
}//end main function
