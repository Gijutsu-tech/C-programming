#include <stdio.h>


int main(){

    int number = 23;
    int isPrime = 0;

    do
    {
        for (int i = number-1; i > 1; i--)
        {
            isPrime = number % i;
        }

        if (isPrime == 0)
        {
            printf("The number is not prime");
        }
        else{
            printf("Number is prime");
            break;
        }
    } while (isPrime > 0);

    
    
    

    return 0;
}