#include<stdio.h>
int main()
{
    printf("enter the numbers u went to sort");
    int a[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=1;i<10;i++)
    {
        int temp=a[i];
        int j=i;
        while(j>0 && a[j-1]>temp)
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;
    }
    
    
    for(int i=0;i<10;i++)
    {
        printf("%d  ",a[i]);
    }
    }

   
    




