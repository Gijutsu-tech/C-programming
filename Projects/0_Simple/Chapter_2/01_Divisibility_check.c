#include <stdio.h>
#include <math.h>

#define EPSILON 1e-9 // Small threshold for floating-point comparison. Useful in cases in which binary for a the modulus is very close to 0 but not exact 0. Thus EPSILON is used at line 23.


int main(){

    printf("Hello! This is a program to check Divisibility of numbers. \n");

    double dividend = 0.0;
    double divisor = 0.0;

    printf("Enter the Dividend number: ");
    scanf("%lf", &dividend);

    printf("Enter the Divisor number: ");
    scanf("%lf", &divisor);

    double mod = fmod(dividend, divisor);

    //Below code should have not been chapter 3 but still
    if (fabs(mod) < EPSILON) // fabs() -- floating point absolute value. Function from <math.h> which returns the absolute value of a floating point number. EPSILON doesn't work for -ve numbers so this is needed.
    {
        printf("\n%.2lf is divisible by %.2lf \n", dividend, divisor);
    }
    else
    {
        printf("\n%.2lf is not divisible by %.2lf and the remainder is %.2lf \n", dividend, divisor, mod);
    }
    
    

    return 0;
}