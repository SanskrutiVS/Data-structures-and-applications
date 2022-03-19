#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20],city[20];

};
void read(struct student *p,int n)

{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" enter name,id and city\n");
        scanf("%s\t%d\t%s",p->name,&p->id,p->city);
    }
}
void display(struct student *p,int n)
{
    int i;
    printf("information of the employee are\n");
    for(i=0;i<n;i++)
    {
        printf("name %s\n",p->name);
         printf("id %d\n",p->id);
          printf("city %s\n",p->city);
    }
}
int main()
{

    struct student *p;
    int n;
    printf("enter no of employees\n");
    scanf("%d",&n);
    read(&p,n);
    display(&p,n);
}
