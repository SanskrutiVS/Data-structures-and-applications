//employee details


#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    float per;
};
void func(struct student record);
int main()
{
    struct student record;
    record.id=1;
    strcpy(record.name,"singh");
    record.per=86.5;
    func(record);
    return 0;
}
void func(struct student record )
{

    printf("id is %d\n",record.id);
      printf("name is %s\n",record.name);
        printf("percentage is %f\n",record.per);


}
