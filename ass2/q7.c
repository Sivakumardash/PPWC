#include<stdio.h>
#include<stdbool.h>
int main()
{
    printf("enter the marks:");
    int marks;
    scanf("%d",&marks);
    if (marks>100)
     {
        printf("enter within n 100");
     }
    else
    {
    switch (marks/10)
    {
        case 9:
        if (marks>=95)
        {
            printf("O");
        }
        else printf("A");
        break;
        case 8: printf("A");
                break;
        case 7:printf("B");
               break;
        case 6:printf("C");
               break;
        case 5: printf("D");
        break;
        case 4:printf("E");
        break;
        default:printf("F");
    }
        
    }

 }
