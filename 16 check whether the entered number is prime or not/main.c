// Program to check whether the entered number is prime or not
#include <stdio.h>
#include <conio.h>

void main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                printf("%d is not a prime number.\n", num);
                break;
            }
        }
        
        // If the loop completes without breaking, the number is prime
        if (i > num / 2) {
            printf("%d is a prime number.\n", num);
        }
    }

    getch();
}
