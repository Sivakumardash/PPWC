#include <stdio.h>

struct person {
    int a;
    char colour;
    union health {   // in union all  member share the same memory space
        int w;
        int t;
    } h;
};

int main() {
    struct person p;

    // Accessing members
    p.a = 10;
    p.colour='b\n';
    p.h.w = 20;
    p.h.t=30;

    // Printing values
    printf("Person a: %d\n", p.a);
    printf("the colour is %c", p.colour);
    printf("Health w: %d\n", p.h.w);
    printf("Health t: %d\n", p.h.t);


    return 0;
}
