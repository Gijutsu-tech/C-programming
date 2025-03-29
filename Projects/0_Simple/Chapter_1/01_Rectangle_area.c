#include <stdio.h>


int main(){

    printf("Hello, This is a rectangle area calculator!\n");

    float height;
    float width;
    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    float area = height*width;
    printf("The area of the rectangle is %.2f", area);

    return 0;
}