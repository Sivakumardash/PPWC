#include<stdio.h>
void sumarr(int a[], int b[], int r[], int size);
int main()
{
     int a[]={1,5,6,7,2};
   int b[]={2,3,2,3,2} ;
   int size=sizeof(a)/sizeof(a[0]);
   int r[size];
   sumarr(a,b,r,size);
}

void sumarr(int a[],int b[],int r[],int size)
{
    for(int i=0;i<size;i++)
    {
        r[i]=a[i]+b[i];
        printf("%d  ",r[i]);

    }


  



}