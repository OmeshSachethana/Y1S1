#include<stdio.h>
#include<assert.h>

float calcPayment(char type);
float calDiscount(int amount, int age);
void testDiscount();
int main(void)
{
	void testDiscount();
	
	int a;
	char t;
	printf("Enter package type(S, C, H): ");
	scanf(" %c", &t);
	
	printf("Enter age: ");
	scanf("%d", &a);
	
	int amount = calcPayment(t);
	float discount = calDiscount(amount, a);
	float nAmount = amount - discount;
	
	printf("\nAmount to pay: %d\n", amount);
	printf("Discount: %.2f\n", discount);
	printf("Net Amount is: %.2f\n", nAmount);
	
	return 0;
}
float calcPayment(char type)
{
	if(type == 'S'){
		return 15000;
	}
	else if(type == 'C'){
		return 50000;
	}
	else if(type == 'H'){
		return 30000;
	}
	else
		printf("Invalid Input type\n");
}
float calDiscount(int amount, int age)
{
	if(age >= 60){
		return amount * 0.1;
}
		return 0;
}

void testDiscount(){
	assert(calDiscount(15000, 60) == 1500);
	assert(calDiscount(50000, 60) == 5000);
	
	
	printf("\nTest function was sucessful!\n");
}
