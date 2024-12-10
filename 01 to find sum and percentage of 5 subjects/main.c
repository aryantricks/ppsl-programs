// Program to calculate the sum and percentage of marks for 5 subjects
#include <stdio.h>
#include <conio.h>

void main() {
    int sub1, sub2, sub3, sub4, sub5, sum;
    float percentage;

    printf("Enter the marks for subject 1: ");
    scanf("%d", &sub1);
    printf("Enter the marks for subject 2: ");
    scanf("%d", &sub2);
    printf("Enter the marks for subject 3: ");
    scanf("%d", &sub3);
    printf("Enter the marks for subject 4: ");
    scanf("%d", &sub4);
    printf("Enter the marks for subject 5: ");
    scanf("%d", &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (sum / 5.0);

    printf("Sum = %d\n", sum);
    printf("Percentage = %.2f%%\n", percentage);

    getch();
}
