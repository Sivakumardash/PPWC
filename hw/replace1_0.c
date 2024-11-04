#include<stdio.h>
int main()
{
    printf("enter the no: ");
    char n[100];
    scanf("%s",n);
    printf("%c\n",n[3]);
    
    for(int i=0;i<100;i++)
    {
        if (n[i]=='0')
        {
            n[i]='1';
        }
        else if(n[i]=='1')
        {
            n[i]='0';
        }
    }
    printf("the replaced number is %s",n);
   
}
