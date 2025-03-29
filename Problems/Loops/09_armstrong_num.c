#include <stdio.h>
#include <math.h>


int main(){

    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int armstrong_num = 0;
    int digits = 0;

    for (int i = num; i > 0; i /= 10){
        digits++;
    }

    for (int i = num; i > 0; i /= 10)
    {
        armstrong_num += (int) round(pow((i % 10), digits));

    }
    if (num == (int) armstrong_num)
    {
        printf("%d is an Armstrong Number.", num);
    }
    else{
        printf("%d is not an Armstrong Number.", num);
    }
    

    return 0;
}