#include <stdio.h>

int findMax(int *arr, int size) {
    int *ptr = arr;  // Pointer to the first element of the array
    int max = *ptr;  // Initialize max to the first element

    for (int i = 1; i < size; i++) {
        ptr++;  // Move the pointer to the next element
        if (*ptr > max) {
            max = *ptr;
        }
    }

    return max;
}

int main() {
    int arr[] = {3, 15, 7, 9, 12, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find the largest value in the array using the findMax function
    int maxVal = findMax(arr, size);

    printf("The largest value in the array is: %d\n", maxVal);

    return 0;
}
