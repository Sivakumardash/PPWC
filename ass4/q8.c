#include <stdio.h>

int main() {
    int a[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = sizeof(a) / sizeof(a[0]);

    printf("Index\tValue\tAddress\n");
    printf("-------------------------\n");

    for (int i = 0; i < size; i++) {
        printf("%d\t%d\t%p\n", i, a[i], (void*)&a[i]);
    }

    return 0;
}
