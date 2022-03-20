//6)	KLE Technological University is a well know university for its academic excellence and Innovations. Top ranked students, always prefer the University for their Graduation in BE. Assume that for the year 2020-21 there are N students admitted to the university for the 1st year. Help University to do the followings.

i)	Read the rankings of N students.

ii)	Arrange the rankings in ascending order.

iii)	Display the highest and lowest ranks of students.
#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the rank of student-%d:", i+1);
        scanf("%d", &a[i]);
    }
}


void DisplayArray(int a[50], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void ascend(int a[50], int n)
{
    int i,j,temp,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n ranks of students is\n");
    for(k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
    printf("\nThe lowest rank of student is:%d",a[0]);
    printf("\nThe highest rank of student is:%d",a[n-1]);
}

int main()
{
    int n,a[50];
    printf("Enter number of students:");
    scanf("%d",&n);
    ReadArray(a,n);
    DisplayArray(a,n);
    ascend(a,n);
    return 0;
}
