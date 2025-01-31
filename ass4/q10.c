#include <stdio.h>

int main() {
    // Initialize the array
    int a[] = {120, 502, 118, 188, 106, 447};

    // Declare and initialize pointers to the array elements
    int *ptr1 = &a[0];
    int *ptr2 = &a[1];
    int *ptr3 = &a[2];
    int *ptr4 = &a[3];
    int *ptr5 = &a[4];
    int *ptr6 = &a[5];

    // Print the array content using the pointers
    printf("Array content using pointers:\n");
    printf("ptr1: Index 0, Value: %d\n", *ptr1);
    printf("ptr2: Index 1, Value: %d\n", *ptr2);
    printf("ptr3: Index 2, Value: %d\n", *ptr3);
    printf("ptr4: Index 3, Value: %d\n", *ptr4);
    printf("ptr5: Index 4, Value: %d\n", *ptr5);
    printf("ptr6: Index 5, Value: %d\n", *ptr6);

    return 0;
}
