//

11)	Godrej constructed a new Apartment with N flats, in Hubballi. At the end of each month the Secretary of the apartment, collects the total units of electricity consumed by each flat.  As per the table given below, help Secretary to calculate the total bill to be paid by each flat.



Units Consumed	Charges apply
0-100	         1.5 Rs/Unit
101-250	          2.3 Rs/Unit, for above 100 units
251-600.   	4.0 Rs/Unit, for above 250 units
Above 600	5.5 Rs/Unit, for above 600 units
#include<stdio.h>
#include<stdlib.h>

void ReadArray(int units[50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nunits consumed by flat%d",i);
        scanf("%d", &units[i]);
    }
}


void DisplayArray(int units[50], int n)
{
    int i;
    printf("\nunits consumed by each flat is:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",units[i]);
    }
}

void Bill(int units[50], int n)
{
    int i;
    float bill;
    printf("\nThe total bill amount to be paid by each flat is:\n");
    for(i=0;i<n;i++)
    {
        if(units[i]>=0 && units[i]<=100)
            bill=units[i]*1.5;
        else if(units[i]>=101 && units[i]<=250)
            bill=100*1.5 + 2.3*(units[i]-100);
        else if(units[i]>=251 && units[i]<=600)
            bill=100*1.5 + 2.3*250 + 4.0*(units[i]-250);
        else if(units[i]>600)
            bill=100*1.5 + 2.3*250 + 4.0*600 + 5.5*(units[i]-600);
        printf("%0.2f\t",bill);
    }
}
void main()
{
    int units[50],n;
    printf("Enter the number of flats:");
    scanf("%d",&n);
    ReadArray(units,n);
    DisplayArray(units,n);
    Bill(units,n);
}
