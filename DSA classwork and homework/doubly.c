#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node *NODE;


NODE getnode()
{
    NODE newnode;
    int n;
    newnode=(NODE *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory is not allocated\n");
        exit(0);

    }
    printf("enter the data\n");
    scanf("%d",&n);
    newnode->data=n;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
NODE insert_end(NODE head)
{
    NODE newnode,temp=head;
    newnode=getnode();
    if(head==NULL)
    {
        newnode->prev=NULL;
        head=newnode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=newnode;
        newnode->prev=temp;
        return head;
    }

}
NODE insert_front(NODE head)
{
    NODE newnode;
    newnode=getnode();
    if(head==NULL)
    {
        newnode->next=NULL;
        head=newnode;
        return newnode;
    }

        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return head;



}
NODE insert_pos(NODE head,int pos)

{

  NODE newnode,back,forth;

  int count;

  newnode=getnode();

  if(head==NULL && pos==1)

  {

    return newnode;

  }

  if(head==NULL)

  {

       printf("invalid position\n");

       return head;

  }



  if(pos==1)

  {

      newnode->next=head;

      return newnode;

  }

count=1;

back=NULL;

forth=head;



while(forth!=NULL && count!=pos)

{

     back=forth;

     forth=forth->next;
     back->next=forth;
     forth->prev=back;

     count++;

}



if(count==pos)

{

     back->next=newnode;
     newnode->prev=back;
     newnode->next=forth;
     forth->prev=newnode;

     return head;

}

else

{

     printf("invalid\n");

}

  return head;

}
void display(NODE first)

{

  NODE n;

  if(first==NULL)

  {

      printf("the list is empty\n");
      exit(0);

  }

  printf("The elements in the list are\n");

  n=first;

  while(n!=NULL)

  {

      printf("%d\t",n->data);

      n=n->next;


  }

  printf("\n");


}
int main()

{

    NODE first=NULL;

    int pos,choice;

   while(1)

  {

   printf(" 1-Insert at front\n 2-Insert at end\n 3-Insert at specific position\n 4-Display List\n 5-Exit\n");

   scanf("%d",&choice);

        switch(choice)

         {

            case 1 : first=insert_front(first);

                        break;

            case 2 : first=insert_end(first);

                        break;

            case 3 : printf("enter the  position \n");

                     scanf("%d",&pos);

                     first=insert_pos(first,pos);

                        break;

            case 4 : printf("Display List Inserted\n");

                     display(first);

                        break;

            case 5 : exit(0);

           }

        }
        return 0;

}
