#include <stdio.h>


int main(){

    for (int num = 1; num <= 10; num++)
    {
        printf("%d", num);
    }


    //with user input-
    int firstNum;
    int lastNum;

    printf("\nEnter the number to start printing from: ");
    scanf("%d", &firstNum);
    printf("Enter the number to end printing at: ");
    scanf("%d", &lastNum);

    for (int i = firstNum; i <= lastNum; i++)
    {
        printf("%d ", i);
    }
    printf("\n")

    

    return 0;
}