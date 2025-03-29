#include <stdio.h>


int main(){

    const double PI = 3.141592; // Always use double for more precision
    double radius = 0.0;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    float area = PI * radius * radius;
    printf("Area of the circle is %.2lf", area);


    return 0;
}