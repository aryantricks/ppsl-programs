// Program to convert binary number into decimal and vice versa
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    int choice, num, binary, decimal = 0, base = 1, remainder;

    printf("Enter 1 to convert Binary to Decimal\n");
    printf("Enter 2 to convert Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Binary to Decimal
        printf("Enter a binary number: ");
        scanf("%d", &binary);

        while (binary != 0) {
            remainder = binary % 10;
            decimal += remainder * base;
            binary /= 10;
            base *= 2;
        }

        printf("Decimal equivalent: %d\n", decimal);
    } else if (choice == 2) {
        // Decimal to Binary
        printf("Enter a decimal number: ");
        scanf("%d", &num);

        printf("Binary equivalent: ");
        while (num > 0) {
            remainder = num % 2;
            printf("%d", remainder);
            num /= 2;
        }
        printf("\n");
    } else {
        printf("Invalid choice.\n");
    }

    getch();
}
