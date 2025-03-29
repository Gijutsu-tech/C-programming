#include <stdio.h>


int main(){

    printf("Welcome to Interest Calculator! \n");

    float P = 0.0;
    float N = 0.0;
    float R = 0.0;

    printf("Enter The Principle Amount: ");
    scanf("%f", &P);
    printf("Enter The Time Duration: ");
    scanf("%f", &N);
    printf("Enter The Rate Of Interest: ");
    scanf("%f", &R);

    double I = (P * N * R)/(float)100;
    printf("The Interest amount is %.2lf \n", I);

    double A = P + I;
    printf("The Total amount recieved after %.1f years is %.2lf", N, A);


    return 0;
}