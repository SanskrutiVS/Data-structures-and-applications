//Example: Largest Element in an array
#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}
void Prime(int a[20], int n)
{
    int i,j=2,flag=1;
    printf("\nThe list of prime numbers in the array is:\n");
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

void ReverseArray(int a[20],int n)
{
    int i;
    printf("\nThe reversed array is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
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

void Sort(int a[20], int n)
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
    printf("\nThe sorted array is:\n");
    for(k=0;k<n;k++)
    {
        printf("%d\t",a[k]);
    }
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

void perfect(int a[25],int n, int sum)
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

void reverse_string(char *str1)
{
    // declare variable
    int i, len, temp;
    len = strlen(str1); // use strlen() to get the length of str string

    // use for loop to iterate the string
    for (i = 0; i < len/2; i++)
    {
        // temp variable use to temporary hold the string
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
}
 void delete_an_element()
 {

 // enter the position of the element to be deleted
    printf( " Define the position of the array element where you want to delete: \n ");
    scanf (" %d", &pos);

    // check whether the deletion is possible or not
    if (pos >= num+1)
    {
        printf (" \n Deletion is not possible in the array.");
    }
    else
    {
        // use for loop to delete the element and update the index
        for (i = pos - 1; i < num -1; i++)
        {
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]
        }

        printf (" \n The resultant array is: \n");

        // display the final array
        for (i = 0; i< num - 1; i++)
        {
            printf (" arr[%d] = ", i);
            printf (" %d \n", arr[i]);
        }
    }
    return 0;

}
NODE delete_end(NODE head)
{
    if(head=NULL)
    {
        printf("List is empty\n");
        return head;
    }
    NODE newn,last;
    newn=head;
    while(newn->next!=NULL)
    {
        last=newn;
        newn=newn->next;
    }
    last->next=NULL;
    free(newn);
    return head;
}
