 #include<stdio.h>
 int main()
 {
    int *p=NULL;
 p=(int *)malloc(sizeof(int));
 *p=10;
 free(p); //p is free now so no value of p is there
 int *q;
 q=(int *)malloc(sizeof(int));
 *q=15;
 printf("%d %d\n",*p,*q);  
 return 0;
 }