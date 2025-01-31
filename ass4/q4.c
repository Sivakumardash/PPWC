#include <stdio.h>

int main() {
    int x = 89; // Initialize x to 89

    // Declare and initialize pointers
    int *p1 = &x;
    int *p2 = &x;
    int *p3 = &x;

    // Display the value of x using p1
    printf("The value of x using p1: %d\n", *p1);

    // Update the value of x to 100 using p3
    *p3 = 100;

    // Display the updated value of x
    printf("The updated value of x: %d\n", x);
    printf("The updated value of x: %d",*p2);

    return 0;
}
