#include <stdio.h>

int main() {
    int a[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    float b[]={1.1,2.2,3.3,4.4,5.5};
    int size=sizeof(a)/sizeof(a[0]);
    int *ptra=a;
    float *ptrb=b;
    for (int i=0;i<size;i++)
    {
        printf("%f , %p\n", *(ptrb+i),ptrb+i);
}
}
