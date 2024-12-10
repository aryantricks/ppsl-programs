// Program to perform operations using switch statement
#include <stdio.h>
#include <conio.h>

void main() {
    int num1, num2;
    char operator;

    // Accepting operands and operator
    printf("Enter first operand: ");
    scanf("%d", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second operand: ");
    scanf("%d", &num2);

    // Performing operation based on the operator
    switch (operator) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", (float)num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    getch();
}
