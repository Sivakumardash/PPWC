#include <stdio.h>

int main() {
    // Initialize the variables
    int a = 12;
    int b = 52;
    int c = 8;

    // Declare and initialize pointer variables
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;

    // Update the values through their respective pointers
    *ptr1 += 10;
    *ptr2 += 10;
    *ptr3 += 10;

    // Print the updated values
    printf("Updated values:\n");
    printf("a: %d\n", *ptr1);
    printf("b: %d\n", *ptr2);
    printf("c: %d\n", *ptr3);

    return 0;
}
