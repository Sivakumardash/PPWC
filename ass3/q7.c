#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a[]={1,2,2,3,3,4,5,6,3,4,8,9,99,999,5555,5555,5555,5555};
    int size=sizeof(a)/sizeof(a[0]);
    int b[size];
    bool is_there=false;
    int k=1;


    for(int i=0;i<size;i++)
    {
        for(int j=0;j<k;j++)
        {
            if (a[i]==b[j])
            {
                is_there=true;
                break;

            }
        }

        if(is_there==false)
        {
            b[k++]=a[i];
        }
        else
        {
            is_there=false;
        }
    }

     for(int i=0;i<k;i++)
         {
             printf("%d ",b[i]); 
          }
}