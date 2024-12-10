// Program to print the sum of even and odd numbers from 1 to N
#include <stdio.h>
#include <conio.h>

void main() {
    int num, sum_even = 0, sum_odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Summing even and odd numbers from 1 to N
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0)
            sum_even += i;  // Adding even numbers
        else
            sum_odd += i;   // Adding odd numbers
    }

    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    getch();
}
