#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int *p;  //int *p means pointer p which stores the adress of value whic is integer type
    int a=22;
    p=&a; // here adress of a is stored in pointer p
    printf("%d\n",*p); //value of pointer p is printed
    //here we cannot write directly *p=22(any integer)
    // to write any integer first we have to allocate space which can be done using malloc calloc realloc
    free(p);
    p=(int*)malloc(sizeof(int));
    *p=22;
     printf("%d",*p);

    return 0;
}