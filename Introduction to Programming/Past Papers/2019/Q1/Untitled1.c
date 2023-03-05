#include<stdio.h>

int main(void)
{
	char pSize, cardT, loyalC, onlineD;
	int pType, qty;
	float total, discount, nAmount;
	while(pType != -1)
	{
		printf("Input pizza type: ");
		scanf("%d", &pType);
		if(pType == -1)
		{
			break;
		}
		printf("Input the pizza  size: ");
		scanf(" %c", &pSize);
		printf("Input the number of pizzas: ");
		scanf("%d", &qty);
		if(pType == 1 && pSize == 'L' || pSize == 'l')
			total += 1720.00 * qty;
			
		else if(pType == 1 && pSize == 'M' || pSize == 'm')
			total += 975.00 * qty;
			
		else if(pType == 2 && pSize == 'L' || pSize == 'l')
			total += 1820.00 * qty;
			
		else if(pType == 1 && pSize == 'M' || pSize == 'm')
			total += 1000.00 * qty;
			
		else
			printf("Invalid Input\n");
			puts(" ");
	}
		//	printf("%.2f", total);
		printf("Are you paying by credit card  (Y/N) ?: ");
		scanf(" %c", &cardT);
		printf("Are you a loyalty customer (Y/N)?: ");
		scanf(" %c", &loyalC);
		printf("Is this an online order (Y/N) ?: ");
		scanf(" %c", &onlineD);
		
		if(cardT == 'Y' || cardT == 'y')
			discount = total * 0.2;
		if(loyalC == 'Y' || loyalC == 'y')
			discount = total * 0.15;
		if(onlineD == 'Y' || onlineD == 'y')
			discount = total * 0.05;
			
		nAmount = total - discount;	
		printf("\nTotal bill  amount: %.2f\n", total);
		printf("Discount: %.2f\n", discount);	
		printf("Net amount: %.2f\n", nAmount);		
	return 0;
}
