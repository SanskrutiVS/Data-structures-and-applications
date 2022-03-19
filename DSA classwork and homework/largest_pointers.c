#include<stdio.h>
struct number
{
    int num;
};
void read(struct number *n)
{
    scanf("%d",&n->num);
}
void display(struct number *n)
{
    printf("%d\n",n->num);
}
void largest(struct number *n1, struct number *n2)
{
    if(n1->num > n2->num)
        printf("%d is greater than %d",n1->num,n2->num);
    else if(n1->num < n2->num)
        printf("%d is greater than %d",n2->num,n1->num);
    else
        printf(" both are equal\n");
}
void main()
{
    struct number n1,n2;
    printf("enter first number\n");
    read(&n1);
    printf("enter first number\n");
    read(&n2);
    printf("two numbers are\n");
    display(&n1);
    display(&n2);
    largest(&n1,&n2);
}
