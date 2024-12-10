// Program to find the reverse of a number
#include <stdio.h>
#include <conio.h>

void main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("The reverse of the number is: %d\n", reversed);

    getch();
}
