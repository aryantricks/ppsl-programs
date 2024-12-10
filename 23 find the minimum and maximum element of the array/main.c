// Program to find the minimum and maximum element of the array
#include <stdio.h>
#include <conio.h>

void main() {
    int n, min, max;

    // Accept the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Accept elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min and max with the first element
    min = arr[0];
    max = arr[0];

    // Find the minimum and maximum values
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum element is: %d\n", min);
    printf("Maximum element is: %d\n", max);

    getch();
}
