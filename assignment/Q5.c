#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }
}


void DisplayArray(int a[50], int n)
{
    int i;
    printf("\n list of days is:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void  Pen(int a[50], int X[50], int n)
{
    int i, j,sum=0,min,max;
    float avg=0;
    for(i=0;i<n;i++)
    {
        X[i]=a[i]*2;
        sum+=X[i];
    }
    printf("\nThe total penalty collected is:Rs.%d",sum);
    avg=sum/n;
    printf("\nThe average penalty collected is:Rs.%0.3f",avg);
    min=max=X[0];
    for(i=0;i<n;i++)
    {
        if(min>X[i])
            min=X[i];
        if(max<X[i])
            max=X[i];
    }
    printf("\nMinimum penalty paid by a student is:Rs.%d",min);
    printf("\nMaximum penalty paid by a student is:Rs.%d",max);
}
void main()
{
    int a[50],X[50],n;
    printf("number of students who returned the book late:");
    scanf("%d",&n);
    ReadArray(a,n);
    DisplayArray(a,n);
    Pen(a,X,n);
}
