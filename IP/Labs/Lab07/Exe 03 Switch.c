#include<stdio.h>
#include<assert.h>
float calpayment(int type);
float caldiscount(int age, float tot);
void testdiscount();
int main()
{
	void testdiscount();
	int age;
	float tot, finalpay, discount;
	char type;

	printf("Enter the package type(S or C or H): ");
	scanf("%c", &type);
	
	printf("Enter the age: ");
	scanf("%d", &age);
	
	tot = calpayment(type);
	discount = caldiscount(age, tot);
	finalpay = tot - discount;
	printf("final payment: %.2f", finalpay);
	
	return 0;	
}
float calpayment(int type)
{
	float tot;
	switch(type)
	{
	
	case 'S' : 		printf("Stroke prevention package \n");
			   		tot = 15000;	break;
	case 'C' :		printf("cancer screening package \n");
			   		tot = 50000;	 break;
	case 'H' : 		printf("healthy heart check package \n ");
			   		tot = 30000;	 break;
	default  :		printf("Invalid Input\n");
	
	}
	return tot;
}
float caldiscount(int age, float tot)
{
	float discount;
	if (age >= 60){
		return tot * 0.1;
}
	else
		return 0;
}
void testdiscount()
{
	assert(caldiscount(60, 15000) == 13500);
}
	
	
	

