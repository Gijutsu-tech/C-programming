#include <stdio.h>


int main(){

    int num, factorial = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = num; i != 1; i--)
    {
        factorial *= i;
    }
    printf("%d", factorial);
    

    return 0;
}