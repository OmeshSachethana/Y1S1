#include<stdio.h>

int main()
{
	int i, j, k;
		
		i = 97; 
        for(j = 1 ; j <= 5; j++)
		{
            for(k = 5; k >= j; k--){
                    printf("%c", i);
            }
            i++;
            printf("\n");

         }
        
	return 0;
}
