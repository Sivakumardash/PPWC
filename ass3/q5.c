#include<stdio.h>
int main()
{
    int a[]={2,4,6,8,9,10};
    int buttom=0;
    int top=5;
    
    printf("enter the number you are searching");
    int target;
    scanf("%d",&target);
    while(buttom<=top)
    {
        int mid=(top+buttom)/2;
        if(a[mid]==target)
        {
            printf("number found at index %d",mid);
            break;
        }
        else if(a[mid]<target)
        {
            buttom=mid+1;
        }
        else
        {
            top=mid-1;
        }
    }

}