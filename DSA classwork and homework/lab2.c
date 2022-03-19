// read name and marks of n students from user and store them in a file
#include<stdio.h>

int main()
{
    char name[50];
    int marks,i,num;
    FILE *fptr;
    fptr=fopen("student.txt","w");
    if(fptr==NULL)
    {
        printf("error!");
        exit(0);

    }
    printf("enter the number of students:");
    scanf("%d",&num);
    for(i=0;i<num;++i)
    {
        printf("for student%d\n enter name:",i+1);
        scanf("%s",name);
        printf("enter marks\n");
        scanf("%d",&marks);
        fprintf(fptr,"%s\n%d\n",name,marks);
    }
    fclose(fptr);
    if((fptr=fopen("student.txt","r"))==NULL)
    {
        printf("error");
        exit(1);

    }
    for(;;)
    {
      fscanf(fptr,"%s",name);
      fscanf(fptr,"%d",&marks);
      printf("%s\n%d\n",name,marks);
      if(feof(fptr))
            break;
    }
    fclose(fptr);
    return 0;
}
