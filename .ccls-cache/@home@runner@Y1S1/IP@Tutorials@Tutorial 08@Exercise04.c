/*Write a C program that read numbers from an integer array and graph the information in the form of bar chat*/
#include<stdio.h>

int main(void)
{
	int size[10] = {0};
	int i, j;
	
	for(i = 0; i < 10; i++){
		printf("Enter the value %d: ", i + 1);
		scanf("%d", &size[i]);
		
}
	printf("\n");
	printf("Element\tValue\tHistogram\n");
	for(i = 0; i < 10; i++)
		{
			printf("%d\t%d\t", i, size[i]);
			for(j = 1; j <= size[i]; j++){
				printf("%c", '*');
			}
			printf("\n");
		}	
	return 0;
}
