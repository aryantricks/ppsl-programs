// Program to accept elements of an array and find the sum of these elements
#include <stdio.h>
#include <conio.h>

void main() {
    int n, sum = 0;

    // Accept the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Accept elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    printf("The sum of the elements is: %d\n", sum);

    getch();
}
