#include<stdio.h>
float calDiscountPercent(int category);
float calcNewPrice(int percentage, float price);
int main(void)
{
	int cate;
	float pri, discount = 0, newprice = 0;
	
	printf("Enter the price: ");
	scanf("%f", &pri);
	
	printf("Enter product code: ");
	scanf("%d", &cate);
	
	discount = calDiscountPercent(cate);
	newprice = calcNewPrice(discount, pri);
	printf("New price: %.2f", newprice);
	return 0;
}
float calDiscountPercent(int category)
{
	if(category == 1)
		return 0.1;
	else if(category == 2)
		return 0.15;
	else if(category == 3)
		return 0.2;
}
float calcNewPrice(int percentage, float price)
{
	return price - price * calDiscountPercent(price);
}
