#include <stdio.h>
#include <string.h>

int main()
{
    char c[50];
    printf("Enter a string: ");
    scanf("%s", c);  // No need for '&' when reading strings

    int l = strlen(c);  // Get the length of the string

    // Print the string in reverse starting from the 5th character
    for (int i = l - 1; i >= 0; i--)
    {
        printf("%c", c[i]);
    }

    return 0;
}
