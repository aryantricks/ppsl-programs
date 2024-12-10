// Program to swap values of two variables using a third variable
#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, temp;

    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Swapping process
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    getch();
}
