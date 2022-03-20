//putname in file

#include<stdio.h>
#include<stdlib.h>
 struct student
 {
     char name[10];
     int i,rollno;
 };
void main()
{

    struct student s;
    display(s);
}
void display(struct student s)
{

    printf("Enter student name and rollno\n");
    scanf("%s%d",s.name,s.rollno);
}
