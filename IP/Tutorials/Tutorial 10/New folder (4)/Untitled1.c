/*C program to read data from a text file*/

#include<stdio.h>
//main function
int main(void)
{
	int input, num;
	FILE *ch;
	
	ch = fopen("number.dat", "a+");//file open
	if(ch == NULL)
	{
		printf("File cannot be open");
		return -1;
	}
	printf("Enter number: ");//prompt
	scanf("%d", &input);//read the value
	
	fscanf(ch, "%d", &num);//read the value from the file
	while(!feof(ch))
	{
		if(input == num)//condition to check the whether number already exists
		{
			printf("Number already exists in the file\n");//prompt
			break;
		}
		fscanf(ch, "%d", &num);
	}
		fprintf(ch, " %d ", input);
		fclose(ch);//file close
			
	ch = fopen("number.dat", "r");//reading mode
   
	fscanf(ch, "%d", &num);
	while(!feof(ch))
   {
   		printf("%d ", num);
   		fscanf(ch, "%d", &num);
   }
		fclose(ch);//file close
}
