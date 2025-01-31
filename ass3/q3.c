#include<stdio.h>
int main()
{
    int a[]={2,14,33,8,4,17,8,1};
    int s=sizeof(a)/sizeof a[0];
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
}
