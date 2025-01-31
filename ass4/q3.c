#include<stdio.h>
int main()
{
    float x=6.7;
    float y=1.2;
    float z=2.3;


    float *p=&x;
    printf("%f\n",*p);

    p=&y;
    printf("%.2f\n",*p);

    p=&z;
    printf("%lf\n",*p);

}
