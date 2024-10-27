#include <stdio.h>
#include <stdlib.h>
int main()
{
         int i,j,n;
         printf("how many elements you went to enter");
         scanf("%d",&n);
         int *p;
         p=(int*)malloc(n*sizeof(int));
         for(i=0;i<n;i++)
         {
             printf("print number: \n");
             scanf("%d",(p+i));
         }
         
         for(i=0;i<n;i++)
         {
              for(j=i+1;j<n;j++)
              {
                   if((*(p+i))>(*(p+j)))
                   {
                          int x=*(p+i);
                          *(p+i)=*(p+j);
                          *(p+j)=x;
                    }
               }
          }
          printf ("sorted no:\n");
          for(i=0;i<n;i++)
          {
                 printf("%d\n",*(p+i));
          }
free(p);
return 0;
}
                
