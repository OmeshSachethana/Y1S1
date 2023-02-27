#include <stdio.h>
#include <math.h>
#include <assert.h>
double hypotenuse(double side1, double side2);
void testHypotenuse();
 

int main (void)
{
            void testHypotenuse();
        
            double side1, side2;    
            
            printf("enter lengths for side1 :");
            scanf("%lf", &side1);
              
            printf("enter lengths for side2 :");
            scanf("%lf ", &side2);
            
            
            printf("hypotenuse is: %.2f", hypotenuse(side1, side2));
    return 0;
}

double hypotenuse(double side1, double side2)
{
    
    return sqrt(side1 * side1 + side2 * side2) ; 
}
void testHypotenuse(){

		assert(fabs(hypotenuse(3, 4) - 5) < 0.01);
        assert(fabs(hypotenuse(5 , 12)- 13) < 0.01 );
        assert(fabs(hypotenuse(15 ,8) - 17 ) < 0.01 );
    }
        
