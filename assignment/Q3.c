//3)	There is a company NI Infotech which has N number of employees working in it. NI Infotech gives bonus to its employees according to the following terms and conditions.

S.No	Experience (years)	Basic Salary	Bonus  applicable

1	5-7	10600	10%  of basic
2	8-10	21300	20% of basic
3	10>	32100	30% of basic

#include<stdio.h>
#include<stdlib.h>

void ReadArray(int YEAR[50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &YEAR[i]);
    }
}


void DisplayArray(int YEAR[50], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\t",YEAR[i]);
    }
}

void Sal(int YEAR[50], int n)
{
    float salary;
    int i;
    printf("\nThe salary of the employees after getting the bonus is:\n");
    for(i=0;i<n;i++)
    {
        if(YEAR[i]>=5 && YEAR[i]<=7)
            salary=10600+(10600*0.1);
        else if(YEAR[i]>=8 && YEAR[i]<=10)
            salary=21300+(21300*0.2);
        else if(YEAR[i]>10)
            salary=32100+(32100*0.3);
        printf("%0.2f\t",salary);
    }
}
void main()
{
    int n,YEAR[50];
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    ReadArray(YEAR,n);
    DisplayArray(YEAR,n);
    Sal(YEAR,n);
}
