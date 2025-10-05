// 1. c program on larget & smallest numbers in an array

#include <stdio.h>

int main() {
    int n; // size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int small = arr[0], large = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
        if (arr[i] > large) {
            large = arr[i];
        }
    }

    printf("Smallest element: %d\n", small);
    printf("Largest element: %d\n", large);

    return 0;
}

