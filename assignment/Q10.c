//
10)	Ashish is studying in 3RD standard in KENDRIYA VIDYALA, Hubballi.  He is writing the Mathematics Test in the school. 
 
One of the questions was to find the PRIME NUMBERS among a set of N numbers. Help Ashish to find the PRIME numbers.


#include<stdio.h>
#include<stdlib.h>

void ReadArray(int a[20], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the %dth element of the array:", i);
        scanf("%d", &a[i]);
    }
}


void DisplayArray(int a[20], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void Prime(int a[20], int n)
{
    int i,j=2,flag=1;
    printf("\nprime numbers in the array are\n");
    for(i=0;i<n;i++)
    {
        while(j<a[i])
        {
            if(a[i]%2==0)
            {
                flag=0;
                break;
            }
            j++;
        }
        if(flag==1)
            printf("%d\t",a[i]);
    }
}
void main()
{
    int n,a[20];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    ReadArray(a,n);
    DisplayArray(a,n);
    Prime(a,n);
}
