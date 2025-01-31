#include <stdio.h>

int main() {
    int a, b, c, d;
    int *p1, *p2, *p3, *p4;
    int maxvar;

    a = 55;
    b = 105;
    c = 89;
    d = 68;

    p1 = &a;
    p2 = &b;
    p3 = &c;
    p4 = &d;

    // Finding the maximum value through pointer manipulation
    maxvar = *p1;
    if (*p2 > maxvar) {
        maxvar = *p2;
    }
    if (*p3 > maxvar) {
        maxvar = *p3;
    }
    if (*p4 > maxvar) {
        maxvar = *p4;
    }

    // Displaying the maximum value
    printf("The maximum value is: %d\n", maxvar);

    return 0;
}
