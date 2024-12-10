// Program to find the sum of all numbers up to a given number
#include <stdio.h>
#include <conio.h>

void main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Summing numbers from 1 to the entered number
    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    printf("The sum of all numbers up to %d is: %d\n", num, sum);

    getch();
}
