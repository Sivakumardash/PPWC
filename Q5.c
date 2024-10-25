#include<stdio.h>
int main() 
{
    int a[]={2,4,5,7};
    for(int i=0;i<4;i++)
    {
       int *ptr=&a[i];
      printf("adress is %p\n or %p ",&a[i],ptr);
       printf("%d\n",a[i]);//-->a[i] it is equal to *(a+i)
    }
}