#include <stdio.h>

int main() {
    int a = 12;
    int b = 25;
    int c = 18;

    // Declare a pointer variable
    int *ptr;

    // Increment a by 10
    ptr = &a;
    *ptr += 10;

    // Increment b by 10
    ptr = &b;
    *ptr += 10;

    // Increment c by 10
    ptr = &c;
    *ptr += 10;

    // Print the updated values
    printf("Updated values:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    //or   printf("a:%d \nb:%d \nc:%d",a,b,c);

    return 0;
}
