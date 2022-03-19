#include<stdio.h>
struct employee
{
    int id;
    char name[50];

}e1;
int main()
{
    e1.id=101;
    strcpy(e1.name,"sonu");
    printf("display\n");
    printf("employee id %d",e1.id);
    printf("employee name %s",e1.name);


}
