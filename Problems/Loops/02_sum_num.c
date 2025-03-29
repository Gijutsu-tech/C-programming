#include <stdio.h>


int main(){

    int firstNum, lastNum, sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &firstNum);
    printf("Enter the last number: ");
    scanf("%d", &lastNum);

    for (int i = firstNum; i <= lastNum; i++)
    {
        sum += i; 
    }
    printf("The sum is %d", sum);
    

    return 0;
}