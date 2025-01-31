#include<stdio.h>
 int main(void)
 {
 int x = 1, z[2] = {10, 11};
 int *p = NULL;
 p = &x;
 *p = 10;
 p = &z[1];
 *(&z[0] + 1) += 3; //value of z[1]=z[1]+3     &z[0]+1->adress of z[1]
 printf("%d, %d, %d\n", x, z[0], z[1]);         //*(&z[0] + 1)->value of z[1]
 printf("%d\n", *(&z[0] + 1));
 return 0;
 }






 