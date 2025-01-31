#include<stdio.h>
#include<stdbool.h>
int main()
{
    int k=0;
    int a[]={1,2,3,4,5,6,5,88,888,99};
    int b[]={4,5,6,22,55,66};
    int s_a=sizeof(a)/sizeof(a[0]);
    int s_b=sizeof(b)/sizeof(b[0]);
    int max_size=s_a;
    int result[max_size];
    bool is_there=false;
    for(int i=0;i<s_a;i++)
    {
        for(int j=0;j<s_b;j++)
        {
            if(a[i]==b[j])
            {
                is_there=true;
                break;
            }
        }
        if(is_there==false)
        {
            result[k++]=a[i];
        }
        else
        {
            is_there=false;
        }
    }
      for (int i = 0; i < k; i++) 
         { 
            printf("%d ", result[i]);
          }

}