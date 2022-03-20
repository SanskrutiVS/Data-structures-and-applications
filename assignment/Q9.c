//

9)	C programming for problem solving is a course offered to first semester students of KLE Technological University. The course conducts POST TESTs to students for a maximum of 10 marks. Once all the POST TESTS are conducted, the marks scored by each student will be announced. Help the course teacher to do the followings.

i)	How many students scored EVEN marks?

ii)	How many students scored ODD marks?
iii)	Find, if any student scored 100% marks? Display appropriate message.
iv)	How many students scored 100% marks?
#include<stdio.h>
#include<stdlib.h>

void ReadArray(int n,int a[50])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the marks of student-%d:", i+1);
        scanf("%d", &a[i]);
    }
}


void DisplayArray(int n,int a[50])
{
    int i;
    printf("\nThe marks of students are:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void CheckMarks(int n,int a[50])
{
    int i,val1=0,odd=0,even=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;

    }
    for(i=0;i<n;i++)
    {
        if(a[i]==10)
        {
            val1++;
            printf("\nCongratulations student-%d!! You have scored 100/100 Marks",i+1);
        }
    }
    printf("\nThe number of students who scored even marks is:%d",even);
    printf("\nThe number of students who scored odd marks is:%d",odd);
    printf("\nThe number of students who scored 100/100 marks is:%d",val1);
}
void main()
{
    int n, a[50];
    printf("Enter the number of students:");
    scanf("%d",&n);
    ReadArray(n,a);
    DisplayArray(n,a);
    CheckMarks(n,a);
}
