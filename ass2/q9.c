#include <stdio.h>

int main() {
    printf("Enter the character: ");
    char ch;
    scanf(" %c", &ch); // Ensure leading whitespaces are ignored

    int n = ch - 'a' + 1; // Calculate the number of rows for lowercase letters

    for (int i = 0; i < n; i++) {
        // Print leading characters
        for (char a = 'a'; a <= ch - i; a++) {
            printf("%c ", a);
        }

        // Print spaces
        for (int s = 0; s < 2 * i; s++) {
            printf("  ");
        }

        // Print trailing characters
        for (char a = ch - i; a >= 'a'; a--) {
            printf("%c ", a);
        }

        printf("\n");
    }

    return 0;
}
