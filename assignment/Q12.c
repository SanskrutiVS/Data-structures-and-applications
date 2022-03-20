//12)	Write a modular c program to perform the following:

 a) Read 1D array

 b) Display 1D array
 c) To find the maximum digit in every element of an array and find sum of all maximum digits.
Write a suitable main function to call the above user defined functions
        Example: 
	Input: arr[3] = {132,458,732}
	Output: Maximum digit in a[0]=3
	Maximum digit in a[1]=8
	Maximum digit in a[2]=7
	Sum=3+8+7=18
#include<stdio.h>
void read(int n,int a[])
{
    int i;
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int n,int a[])
{
    int i;
    printf("The array elements are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void max(int n,int a[])
{
    int i,sum=0,r=0,max;
    for(i=0;i<n;i++)
    {
        max=0;
        while(a[i]!=0)
        {
            r=a[i]%10;
            a[i]=a[i]/10;
            if(r>max)
            {
                max=r;
            }
        }
        printf("%d\t",max);
        sum=sum+max;
    }
    printf("\nSum = %d\n",sum);
}
void main()
{
    int n,a[100];
    printf("enter size:\n");
    scanf("%d",&n);
    read(n,a);
    display(n,a);
    max(n,a);
}
