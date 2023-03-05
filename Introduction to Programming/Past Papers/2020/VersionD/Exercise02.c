#include<stdio.h>
float calculateTotalCost(int itemNo, int quantity);
void printDetails(int itemNo, int quantity, float totalCost);
int main(void){
	
	int item, qty;
	
	printf("Enter Item No: ");
	scanf("%d", &item);
	
	printf("Enter the quantity: ");
	scanf("%d",  &qty);
	
	float totalCost = calculateTotalCost(item, qty);
	printDetails(item, qty, totalCost);
	return 0;	
}
float calculateTotalCost(int itemNo, int quantity)
{
	if(itemNo == 1)
	{
		return 100 * quantity;
	}
	else if(itemNo == 2)
	{
		return 200 * quantity;
	}
	else if(itemNo == 3)
	{
		return 300 * quantity;
	}
	else
		printf("Invalid Item Number\n");
}
void printDetails(int itemNo, int quantity, float totalCost)
{
	printf("Item No: %d\nQuantity: %d\nTotal Cost: %.2f\n", itemNo, quantity, totalCost);
	return;
}
