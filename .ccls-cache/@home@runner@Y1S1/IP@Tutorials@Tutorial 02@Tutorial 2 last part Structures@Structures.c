
/* Items in a shop */

#include<stdio.h>

struct item {
	
	int itemNo;
	double price;
	int quantity;
	
	
}item1, item2; // Item type objects

int main(){
	
	printf("Enter item number for item 01: ");
	scanf("%d", &item1.itemNo); //Input Item number
	printf("Enter price: ");
	scanf("%lf", &item1.price); //Input Item price
	printf("Enter quantity: ");
	scanf("%d", &item1.quantity); //Input Item quantity
	
	printf("Enter item number for item 02: ");
	scanf("%d", &item2.itemNo); //Input Item number:
	printf("Enter price : "); 
	scanf("%lf", &item2.price); // Input Item  price
	printf("Enter quantity: ");
	scanf("%d", &item2.quantity); // Input Item quantity
	
	printf("\nItem No\tPrice\tQuantity\n");
	printf("%d\t%.2f\t%d\n", item1.itemNo, item1.price, item1.quantity);
	printf("%d\t%.2f\t%d\n", item2.itemNo, item2.price, item2.quantity);

		
	return 0;
} 
