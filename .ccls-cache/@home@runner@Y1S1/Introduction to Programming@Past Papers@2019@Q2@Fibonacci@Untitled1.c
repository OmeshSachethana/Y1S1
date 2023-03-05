#include <stdio.h>

main()
{       int fib[10];
        int i;

        fib[0] = 0;
        fib[1] = 1;

        for(i = 2; i < 10; i++)
                fib[i] = fib[i-1] + fib[i-2];

        for (i = 0; i < 10; i++)
                printf("%d\t",fib[i]);
}

/*	fib[0] = 0;
	fib[1] = 1;
	fib[2] = fib[0] + fib[1];
	fib[3] = fib[1] + fib[2];
	fib[4] = fib[2] + fib[3];
	fib[5] = fib[3] + fib[4];
	fib[6] = fib[4] + fib[5];
	fib[7] = fib[5] + fib[6];
	fib[8] = fib[6] + fib[7];
	fib[9] = fib[7] + fib[8];
	fib[10] = fib[8] + fib[9];*/
