#include <stdio.h>

int main() {
    int a = 52;
    int b = 18;

    // Declare and initialize pointers
    int *ptr1 = &a;
    int *ptr2 = &b;

    // Find the greater value using pointer manipulation
    if (*ptr1 > *ptr2)
    {
        printf("%d is greater than %d\n", *ptr1, *ptr2);
    }
    else
    {
        printf("%d is greater than %d\n", *ptr2, *ptr1);
    }
  
    return 0;
}
