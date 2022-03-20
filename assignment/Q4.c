//4)	In a class there are 10 students. Course teacher of “DS with Applications ” wants to calculate the class average and also count total number of students who scored above and below class average. Most of the students IQ is very high. Help course teacher to solve the above problem. 




#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void DisplayArray(int a[100], int n)
{
    int i;
    printf("\nThe marks of %d students are:",n);
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void  AvgArray(int a[100], int n, int sum)
{
    int i, j, VAL1=0, VAL2=0;
    float avg=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    printf("\nThe average is:%f",avg);
    for(i=0;i<n;i++)
    {
        if(a[i]<avg)
            VAL1++;
        else
            VAL2++;
    }
    printf("\nNumber of students who scored less than average is:%d",VAL1);
    printf("\nNumber of students who scored more than average is:%d",VAL2);
}
void main()
{
    int  n,a[100],sum=0;
    printf("Enter the number of students:");
    scanf("%d",&n);
    ReadArray(a,n);
    DisplayArray(a,n);
    AvgArray(a,n,sum);
}
