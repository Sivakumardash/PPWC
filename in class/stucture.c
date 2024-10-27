#include<stdio.h>
#include<string.h>


struct student{
    char name[20];
    int rollno;
    float marks;
    };
    
    int main()
    {
     
     struct student std1={"siva",4186,99.66};
     struct student std2,std3;
     //entering the value of std2
     strcpy(std2.name,"sachin");
     std2.rollno=7789;
     std2.marks=67.1;
       
     //taking user inputs
     printf("enter name,rolllno,mark of the student3=");
     scanf("%s %d %f",std3.name,&std3.rollno,&std3.marks);
     //printing the value
     printf("student1:%s %d %.2f\n",std1.name,std1.rollno,std1.marks);
     printf("student2:%s %d %.2f\n",std2.name,std2.rollno,std2.marks);
     printf("student3:%s %d %.2f\n",std3.name,std3.rollno,std3.marks);
     return 0;
     }
     
     


