/*C program to calculate the discount given for wedding packages*/
#include<stdio.h>

float getDiscountPrice(int noOfGuests, float chargePerGuest);	//Hotel charge = no of guests * charge per guest
float getAmount(int noOfGuests, float chargePerGuest, float discount);	//(no of guests * charge per guest)-discount

int main(void)
{
	int guest;
	float cGuest;
	printf("Enter no of guests: ");
	scanf("%d", &guest);
	printf("Enter charge per guest: ");
	scanf("%f", &cGuest);
	
	float discount = getDiscountPrice(guest, cGuest);
	float amount = getAmount(guest, cGuest, discount);
	
	printf("Discount: %.2f\n", discount);
	printf("Amount to be paid: %.2f\n", amount);
 } 
float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
	if(noOfGuests > 200)
		return (noOfGuests * chargePerGuest) * 0.10;
	else
		return 0;
			
}
float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
	return (noOfGuests * chargePerGuest) - discount;
}
