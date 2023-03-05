#include<stdio.h>

int main(void)
{
	char id[5], name[8];
	int qty = 0, i, price = 0, tot = 0;
	FILE *p;
	
	p = fopen("purchase.txt", "w");
	
	if(p == NULL)
	{
		printf("File cannot be open");
		return -1;
	}
	
	for(i = 0; i < 4; i++)
	{
		printf("Enter item ID: ");
		scanf("%s", id);
		printf("Enter name: ");
		scanf("%s", name);
		printf("Enter quantity: ");
		scanf("%d", &qty);
		printf("Enter price: ");
		scanf("%d", &price);
		fprintf(p, "%s\t%s\t%d\t%d\n", id, name, qty, price);
		printf("\n");
	}
		fclose(p);
		
		p = fopen("purchase.txt", "r");
		
		printf("Item\tQuantity\tUnit Price\tPrice\n");
		fscanf(p, "%s\t%s\t%d\t%d", id, name, &qty, &price);
		while(!feof(p))
		{
			printf("%s\t%d\t\t%d\t\t", name, qty, price);
			printf("%d\n", qty * price);
			tot += qty * price;
			fscanf(p, "%s\t%s\t%d\t%d", id, name, &qty, &price);
		}
			printf("Total\t\t\t\t\t%d", tot);
		fclose(p);
}
