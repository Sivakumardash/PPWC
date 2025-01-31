#include <stdio.h>
 int main() 
 {
    int a=12;
    int b=13;
    int c=14;
    int *p=&a;
    printf("%d",*p);
     p=&b;
    printf("%d",*p);
    p=&c;
    printf("%d",*p);

 }
