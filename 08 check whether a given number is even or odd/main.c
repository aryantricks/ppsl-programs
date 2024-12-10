// Program to check whether a given number is even or odd
#include <stdio.h>
#include <conio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking whether the number is even or odd
    if (num % 2 == 0) {
        printf("The number %d is even.\n", num);
    } else {
        printf("The number %d is odd.\n", num);
    }

    getch();
}
