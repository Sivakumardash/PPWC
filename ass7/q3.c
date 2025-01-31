#include <stdio.h>

struct person {
    int a;
    struct health 
    {
        int b;
    } 
    h;
}p;

int main() {
   

    // Accessing members
    p.a = 10;
    p.h.b = 20;
    

    // Printing values
    printf("Person a: %d\n", p.a);
    printf("Health a: %d\n", p.h.a);



    return 0;
}
