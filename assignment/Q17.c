// exchange the content of 2 sets

#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a1[20], int a2[20], int n)
{
    int i;
    printf("\nEnter the element of the array1:");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a1[i]);
    }
    printf("\nEnter the element of the array2:");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a2[i]);
    }
}


void DisplayArray(int a1[20], int a2[20], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\t",a1[i]);
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a2[i]);
    }
}

void Exchange(int a1[20], int a2[20], int n)
{
    int i,temp;
    for(i=0;i<n;i++)
    {
        temp=a1[i];
        a1[i]=a2[i];
        a2[i]=temp;
    }
     printf("\nThe arrays after exchange are:\n");
     DisplayArray(a1,a2,n);
}
void main()
{
    int n, a1[20], a2[20];
    printf("Enter the size of arrays:\n");
    scanf("%d",&n);
    ReadArray(a1,a2,n);
    DisplayArray(a1,a2,n);
    Exchange(a1,a2,n);
}
