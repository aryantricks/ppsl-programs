// Program to print Armstrong numbers from 1 to 100
#include <stdio.h>
#include <conio.h>

void main() {
    int num, original, remainder, result, n;

    printf("Armstrong numbers between 1 and 100:\n");

    // Checking Armstrong numbers between 1 and 100
    for (num = 1; num <= 100; num++) {
        original = num;
        result = 0;
        n = 0;
        
        // Count number of digits in the number
        while (original != 0) {
            original /= 10;
            n++;
        }

        original = num;
        
        // Calculating sum of powers of digits
        while (original != 0) {
            remainder = original % 10;
            result += pow(remainder, n);
            original /= 10;
        }

        // Checking if the sum of powers is equal to the number
        if (result == num) {
            printf("%d ", num);
        }
    }

    getch();
}
