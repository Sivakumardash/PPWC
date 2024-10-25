#include <stdio.h>

int main() {
    int n; // Number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit if the input is not valid
    }

    int fib[n]; // Array to store Fibonacci numbers

    // Initializing the first two Fibonacci numbers
    fib[0] = 0;
    if (n > 1) {
        fib[1] = 1;
    }

    // Generating the Fibonacci series
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Printing the Fibonacci series
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}