//1)	Read an array of numbers with size n and count frequency of positive/negative numbers




#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[25], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the %dth element of the array\n",i);
        scanf("%d",&a[i]);
    }
}

void DisplayArray(int a[25], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void frequency(int a[25], int n)
{
    int VAL1=0, VAL2=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            VAL1++;
        else
            VAL2++;
    }
    printf("\nThe frequency of positive elements %d",VAL1);
    printf("\nThe frequency of negative elements %d",VAL2);

}
void main()
{
    int n,a[25];

    printf("size of array\n");
    scanf("%d",&n);
    ReadArray(a,n);
    DisplayArray(a,n);
    frequency(a,n);
}
