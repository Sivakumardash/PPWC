#include<stdio.h>
int main()
{
    int f1[]={12,20,24,32};
    int f2[]={7,8,65,105};
    int s_f1=sizeof(f1)/sizeof(f1[0]);
    int s_f2=sizeof(f2)/sizeof(f2[0]);
    int size=s_f1+s_f2;
    int f3[size];
    int k=0,l=0,m=0;
    while(k<s_f1 && l<s_f2)
    {
        if(f1[k]<f2[l])
        {
            f3[m]=f1[k];
            k++;
            m++;
        }
        else
        {
            f3[m]=f2[l];
            m++;
            l++;
        }
    }

    // Copy remaining elements of f1[], if any
     while (k < s_f1)
      { 
        f3[m++] = f1[k++];
     } 
     // Copy remaining elements of f2[], if any 
     while (l < s_f2)
      { 
        f3[m++] = f2[l++]; 
      }
   
    for(int i=0;i<size;i++)
    {
        printf("%d  ",f3[i]);
    }

}