#include <stdio.h>
#include <unistd.h> // Required for fork()

int main() {
    fork();  // First fork

    // Second and third forks
    fork();  
    fork();

    fork();  // Fourth fork

    printf("doing!\n");

    return 0;
}
