#include <stdio.h>

int main() {
    // Initialize the array
    int a[] = {120, 502, 118, 188, 106, 447};

    // Declare and initialize the pointer to the first element of the array
    int *ptr = a;

    // Print the array content using the pointer
    printf("Array content using pointer:\n");
    for (int i = 0; i < 6; i++) {
        printf("Index %d, Value: %d, Address: %p\n", i, *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}
