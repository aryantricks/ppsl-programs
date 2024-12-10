// Program to find the factorial of a given number
#include <stdio.h>
#include <conio.h>

void main() {
    int num, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculating factorial using a loop
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is: %d\n", num, factorial);

    getch();
}
