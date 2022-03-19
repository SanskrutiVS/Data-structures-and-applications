#include<stdio.h>
#include<stdlib.h>
struct addition
{
    int num;
};


void readpoint(struct addition *n)
{
    scanf("%d",&n->num);
}
void disp(struct addition *n)
{
   printf("%d\n",n->num);
}
int add(const struct addition *n1,const struct addition *n2)
{
    int Ad;
    Ad= n1->num+n2->num;
    return Ad;



}
int main()
{
    int A;
    struct addition n1,n2;
    printf("Enter two nos to be added\n");
    readpoint(&n1);
     readpoint(&n2);
     printf("Two numbers are\n");
     disp(&n1);
       disp(&n2);
    A=add(&n1,&n2);
    printf("addition of two numbers is %d",A);
return 0;
}
