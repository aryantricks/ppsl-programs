// Program to calculate the area and circumference of a circle
#include <stdio.h>
#include <conio.h>

void main() {
    float radius, area, circumference;
    const float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    getch();
}
