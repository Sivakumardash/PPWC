#include<stdio.h>
int main(){
int x=34;
int *ptr=&x;
char ch='a';
char *ptr1=&ch;
printf("%d\n",x);
printf("%p\n",&x);
printf("%p\n",ptr);
printf("%d\n",*ptr);
printf("%d\n",*(&x));
return 0;
}