#include<stdio.h>
#include<string.h>


struct student{
    char name[20];
    int rollno;
    float marks;
    };
    
    int main()
    {
      struct student s[3];
      printf("enter name,rollno,marks of 3 students ");
      for(int i=0 ;i<2;i++)
      {
         printf("enter student[%d]info--",i);
         scanf( "%s %d %f ",s[i].name,&s[i].rollno,&s[i].marks);
      }
      
      //printing the 3 students info
       for(int i=0 ;i<3;i++)
      {
        printf("%s %d %f ",s[i].name,s[i].rollno,s[i].marks);
      }
        return 0;
        }
      
