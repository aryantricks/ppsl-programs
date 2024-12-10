// Program to find percentage and print grade based on marks
#include <stdio.h>
#include <conio.h>

void main() {
    int marks1, marks2, marks3, marks4, marks5;
    float total, percentage;

    // Accepting marks of five subjects
    printf("Enter the marks of the first subject: ");
    scanf("%d", &marks1);
    printf("Enter the marks of the second subject: ");
    scanf("%d", &marks2);
    printf("Enter the marks of the third subject: ");
    scanf("%d", &marks3);
    printf("Enter the marks of the fourth subject: ");
    scanf("%d", &marks4);
    printf("Enter the marks of the fifth subject: ");
    scanf("%d", &marks5);

    // Calculating total marks and percentage
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (total / 500) * 100;

    // Printing the percentage and grade
    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    // Grade determination based on percentage
    if (percentage >= 90) {
        printf("Grade A\n");
    } else if (percentage >= 80) {
        printf("Grade B\n");
    } else if (percentage >= 60) {
        printf("Grade C\n");
    } else {
        printf("Grade D\n");
    }

    getch();
}
