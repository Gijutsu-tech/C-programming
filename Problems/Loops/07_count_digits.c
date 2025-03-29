#include <stdio.h>


int main(){

    int num = 32444;
    int digits = 0;
    for (int i = num; i > 0; i /= 10)
    {
        digits++;
    }
    printf("Number of digits is %d\n", digits);
    
    int smthn = 1235 % 10;
    printf("This is smthn: %d", smthn);
    return 0;
}