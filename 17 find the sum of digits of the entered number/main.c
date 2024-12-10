// Program to find the sum of digits of the entered number
#include <stdio.h>
#include <conio.h>

void main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Summing the digits of the number
    while (num != 0) {
        digit = num % 10;  // Get the last digit
        sum += digit;      // Add the digit to sum
        num /= 10;         // Remove the last digit
    }

    printf("The sum of the digits is: %d\n", sum);

    getch();
}
