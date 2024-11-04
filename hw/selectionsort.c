#include<stdio.h>
int main()
{
    int arr[] = {64, 34, 25, 12, 22};
        
        for (int i=0;i<5;i++)
    {
            int temp=70000;
            int k=i;

        for(int j=i;j<5;j++)
        {
            
            if(temp>arr[j])
            {
                temp=arr[j];
                k=j;
                   
            }
        }
        int temp2=arr[i];
        arr[i]=temp;
        arr[k]=temp2;
    }
     for(int i=0;i<5;i++)
    {
        printf("%d  ",arr[i]);
    }
}