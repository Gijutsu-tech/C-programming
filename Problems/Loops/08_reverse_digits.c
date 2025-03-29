#include <stdio.h>


int main(){

    int num, largestNum = 0;
    int digits;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i /= 10)
    {
        digits = i % 10;
        printf("%d\n", digits);
        if (digits > largestNum)
        {
            largestNum = digits;
        }
        
    }
    printf("%d", largestNum);

    return 0;
}