// Program to check whether a given year is a leap year or not
#include <stdio.h>
#include <conio.h>

void main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    getch();
}
