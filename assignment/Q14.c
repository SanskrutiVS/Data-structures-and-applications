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
int equi(int n,int a[])
{
    int i,j,l,r;
    for(i=0;i<n;++i)
    {
        l=0;
        for(j=0;j<i;j++)
            l+=a[j];
        r=0;
        for(j=i+1;j<n;j++)
            r+=a[j];
        if(l==r)
            return i;
    }
    return -1;
}
void main()
{
    int n,a[100],y;
    printf("Enter the size:");
    scanf("%d",&n);
    read(n,a);
    y=equi(n,a);
    printf("Equilibrium index is %d",y);
}
