#include<stdio.h>

void ReadArray(int a[25], int n)
{
    int i,j,sum=0;
    printf("enter array\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
}

void DisplayArray(int a[25], int n)
{
    int i;
     printf("array is");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);

    }
}
void per(int a[25],int n, int sum)
{

    int i,j,rem;
    for(i=0;i<n;i++)
    {
        for(j=1;j<a[i];j++)
        {
            rem=a[i]%j;
            if(rem==0)
            {
                sum=sum+j;
            }
        }
        if(sum== a[i])
            printf("\n%d perfect number\n", a[i]);
        else
            printf("\n%d not a perfect number\n", a[i]);
    }
}

 void main()
 {
     int n, a[100],sum=0;
     printf("enter the size of an array\n");
     scanf("%d",&n);
     ReadArray(a,n);
     DisplayArray(a,n);
    per(a,n,sum);

 }
