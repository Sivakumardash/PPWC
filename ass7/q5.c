#include <stdio.h>

union person {
    int a;
    struct health {
        int e;
        int t;
    } h;
};

int main() {
    union person p;

    // Accessing members
    p.a = 10;
    p.h.e = 30;  //(imp) Be aware that this overwrites p.a as union is used
    p.h.t=77;

    // Printing values
    printf("Person a: %d\n", p.a);
    printf("Health e: %d\n", p.h.e);
    printf("Health t: %d\n", p.h.t);


    return 0;
}
