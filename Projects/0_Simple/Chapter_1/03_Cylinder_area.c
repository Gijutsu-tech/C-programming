#include <stdio.h>


int main(){

    printf("Hello! This program calculates the area of a cylinder.\n");

    const double PI = 3.141592;
    double radius = 0.0;
    double height = 0.0;
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);
    float vol = PI * radius * radius * height;
    printf("\nThe Volume of the cylinder is %.2lf", vol);

    return 0;
}