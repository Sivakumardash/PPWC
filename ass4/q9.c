#include <stdio.h>

int main() {
    // Declare the arrays
    int intArray[] = {10, 13, 20, 33, 44};
    float floatArray[] = {10.2, 13.3, 20.0, 33.3, 45.3, 89.9};

    // Pointers to the arrays
    int *intPtr = intArray;
    float *floatPtr = floatArray;

    // Print values and addresses of intArray
    printf("intArray values and addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Value: %d, Address: %p\n", *(intPtr + i), (void *)(intPtr + i));
    }

    // Print values and addresses of floatArray
    printf("floatArray values and addresses:\n");
    for (int i = 0; i < 6; i++) {
        printf("Value: %.1f, Address: %p\n", *(floatPtr + i), (void *)(floatPtr + i));
    }

    return 0;
}
