#include<stdio.h>
int main()
{
    int a[]={12,4,3,56,1,5,4};
    for(int i=0;i<7;i++)
    {
        for (int j=0;j<7-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }

        for(int i=0;i<7;i++)
      {
        printf("%d \n",a[i]);

      }

    
}