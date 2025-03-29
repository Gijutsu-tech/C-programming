#include <stdio.h>


int main(){

    int number1;
    int number2;
    
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);

    int max = (number1 > number2) ? number1 : number2;

    for (int i = number2; ; i++)
    {
        if (i % number1 == 0 && i % number2 == 0)
        {
            printf("The LCM is %d", i);
            break;
        }
        
    }
    

    return 0;
}