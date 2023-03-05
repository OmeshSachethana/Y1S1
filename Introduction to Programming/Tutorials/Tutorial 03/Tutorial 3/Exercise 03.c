
/* Exercise 03 */

#include<stdio.h>

int main(){
	
	int i = 1, j = 2, k = 3, m = 2;
	
	printf("%d", i == 1); 						//it display 1
	printf("%d", j == 3); 						//it display 0
	printf("%d", i >= 1 && j < 4);				//it display 1
	printf("%d", k + m < j || 3 - j >= k);		//it display 0
	printf("%d", !m);							//it display 0
	printf("%d", !(j - m));						//it display 1
	
	
	return 0;
}
