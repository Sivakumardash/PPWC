#include<stdio.h>
int main()
{
    printf("enter a number to see weather it is prime or not--");
    int n;
    int s=0;
    scanf("%d",&n);
     
     //check prime or not
    
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
             s=s+1;
             
        }
    }

    if(s>=1)
    {
        printf("%d  is not a prime number and it is %d times divisible",n,s);
    }    
    else
    {
        printf("tne no is a prime no\n");
    }
    

    
}