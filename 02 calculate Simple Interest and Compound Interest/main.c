// Program to calculate Simple Interest and Compound Interest
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    getch();
}
