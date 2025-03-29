#include <stdio.h>


int main(){

    printf("Hello! This is a program to convert temperature in Celcius to Fahrenheit \n");
    double celcius = 0.0;
    printf("\nEnter the temperature in celcius: ");
    scanf("%lf", &celcius);
    double fahrenheit = (celcius * (9.0/5.0) + 32); // Always make values like 9 and 5 double or float, otehrwise C will round up them thinking their output should also be an integer.
    printf("\nThe temperature in Fahrenheit is %.2lf", fahrenheit);

    return 0;
}