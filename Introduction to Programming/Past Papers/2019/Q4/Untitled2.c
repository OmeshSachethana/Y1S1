#include<stdio.h>

int main(void)
{
	FILE *a;
	int input, i, num, flag = 0;
	char n[30], name[30];
	a = fopen("loyalty.dat", "a+");
	
	if(a == NULL)
	{
		printf("File cannot open");
		return -1;
	}
	for(i = 0; i < 5; i++)
	{
		printf("Enter loyalty number: ");
		scanf("%d", &input);
		printf("Enter name: ");
		scanf("%s", n);
	
		fscanf(a, "%d %s", &num, name);
		while(!feof(a))
		{
			if(input == num)
			{
				printf("Number exists\n");
				flag = 1;
				break;
			
			}
			fscanf(a, "%d %s", &num, name);
		}
		
		if(flag == 0)
		{
			fprintf(a, "%d %s\n", input, n);
		}
		a = fopen("loyalty.dat", "a+");
	}	
		fclose(a);
}
