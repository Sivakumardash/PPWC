#include <stdio.h>

int main() {
    // Declare variables
    int Ia = 3445;
    float Fb = 45.0;
    char Chvar = 'Z';

    // Print values and addresses
    printf("Variable name: Ia, Value: %d, Address: %p\n", Ia, (void*)&Ia);
    printf("Variable name: Fb, Value: %.2f, Address: %p\n", Fb, (void*)&Fb);
    printf("Variable name: Chvar, Value: %c, Address: %p\n", Chvar, (void*)&Chvar);

    return 0;
}
