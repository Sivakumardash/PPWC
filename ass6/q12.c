 #include <stdio.h>
 int main()
 {
    int a[5]={2,4,5,8,9};
    int n=0;
    int sum=0;
   int ans=add(a,n);
   printf("%d",ans);
 }
int add(int a[],int n)
    {
        if (n==4)
        {
            return a[n];

        }
        else{
            return (a[n]+add(a,n+1));
        }
    }
 
  