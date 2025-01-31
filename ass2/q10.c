#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of your choice: ");
    scanf("%d", &n); // Remove the space after "%d"

    // Print the top border of the table
    printf("+-----------------------------------------+\n");

    // Print the multiplication results in a row
    printf("| ");
    for (int i = 1; i <= 10; i++) {
        printf("%2d ", n * i);
    }
    printf("|\n");
                  

    // Print the numbers from 1 to 10 in a row
    printf("| ");
    for (int i = 1; i <= 10; i++) {
        printf("%2d ", i);
    }
    printf("|\n");

    // Print the number n repeated 10 times in a row
    printf("| ");
    for (int i = 1; i <= 10; i++) {
        printf("%2d ", n);
    }
    printf("|\n");

    // Print the bottom border of the table
    printf("+-----------------------------------------+\n");

    return 0;
}
