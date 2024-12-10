// Program to accept two arrays and save the sum of corresponding elements in a third array
#include <stdio.h>
#include <conio.h>

void main() {
    int n;

    // Accept the size of the arrays
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum_arr[n];

    // Accept elements for the first array
    printf("Enter elements for the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Accept elements for the second array
    printf("Enter elements for the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Calculating the sum of corresponding elements
    for (int i = 0; i < n; i++) {
        sum_arr[i] = arr1[i] + arr2[i];
    }

    // Displaying the sum of corresponding elements
    printf("Sum of corresponding elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sum_arr[i]);
    }

    getch();
}
