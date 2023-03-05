#include<stdio.h>
#include<assert.h>
float findTotalAmount(float interestRate, float amount);
float calcAnnualInterest(float interestRate, float amount);
void testTotalAmount();
int main(void)
{
	testTotalAmount();
	float amount, interest;
	int i;
	printf("Enter amount to be invested: ");
	scanf("%f", &amount);
	printf("Enter Annual interest Rate(in percentage): ");
	scanf("%f", &interest);
	puts("");
	for(i = 0; i < 5; i++)
	{
		printf("Amount after year %d: %.2f\n", i + 1, findTotalAmount(interest, amount));
		amount = findTotalAmount(interest, amount);
	}
	
}
float calcAnnualInterest(float interestRate, float amount)
{
	if(amount > 1000000)
	{
		return amount * ((interestRate + 0.005) / 100);
	}
	else
		return amount * interestRate / 100;
}
float findTotalAmount(float interestRate, float amount)
{
	return calcAnnualInterest(interestRate, amount) + amount;
}
void testTotalAmount()
{
	assert(findTotalAmount(1000, 10000) - 11000 > 0.01);
	assert(findTotalAmount(1100, 11000) - 12100 > 0.01);
	printf("Assertion sucessful\n");
}
