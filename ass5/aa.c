#include<stdio.h>

void demo() {
    printf("SS");
}

int main() {
    demo();
    void (*fun)();
    fun = demo;
    (*fun)(); // Corrected line-4
    fun(); // line-5
    return 0;
}
