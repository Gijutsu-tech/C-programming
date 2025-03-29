#include <stdio.h>


int main(){

    printf("Welcome to prime generator!\n");

    int num = 0;
    int isPrime = 0;

    printf("Enter the number to generated prime numbers till: ");
    scanf("%d", &num);

    printf("Prime numbers between 0 and %d are: ", num);

    for (int i = 3; i <= num; i++)
    {
        isPrime = 1;
        for (int j = i-1; j > 1; j--)
        {

            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
            
        }
        if (isPrime > 0)
        {
            printf("%d, ", i);
        }
        
    }
    

    return 0;
}