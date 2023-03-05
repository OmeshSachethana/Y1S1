#include<stdio.h>
#include<string.h>
#define SIZE 20
void convertToUpperCase (char a[], int size);
int main(void)
{

	char address[] = "SLIIT, New Kandy Road, Malabe";
	char copy[30];
	
	strcpy(copy, address);
	convertToUpperCase (copy, 30);
}
void convertToUpperCase (char a[], int size )
{
	int i;
	for (i = 0; a[i]!='\0'; i++) {
      if(a[i] >= 'a' && a[i] <= 'z') 
	  {
         a[i] = a[i] - 32;
      }
   }
	printf("%s", a);
}
//a = ('S'L'I''I''T', N'(69)(37), 'K'(65)(78)(68)(89), 'A'(79)(65)(68), 'M'(65)(76)(65)(66)(59)
