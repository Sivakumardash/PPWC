#include<stdio.h>
int main()
{
    int temp;
    int a=10;
    int b=20;
    printf("value of a: %d & adress is %p\n",a,&a);
    printf("value of b: %d & adress is %p\n",b,&b);

    temp=a;
    a=b;
    b=temp;
    printf("   after swapping : \n");

    printf("value of a: %d & adress is %p\n",a,&a);
    printf("value of b: %d & adress is %p",b,&b);

}