#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node *NODE;
NODE getnode()
{
    NODE newn;
    int num;
    newn=(NODE *)malloc(sizeof(struct Node));
    if(newn==NULL)
    {
        printf("memory is not allocated\n");
        exit(0);
    }
    printf("enter number to be inserted\n");
    scanf("%d",&num);
    newn->data=num;
    newn->next=NULL;
    return newn;
}

NODE insert_end(NODE head)

{

  NODE newn;

  NODE new_node;

  newn=getnode();

  if(head==NULL)

  {

    return newn;

  }
new_node=head;

  while(new_node->next!=NULL)

  {

      new_node=new_node->next;

  }

  new_node->next=newn;
  newn->next=NULL;

  return  head;



}
NODE swap(NODE head)
{
    if(head==NULL||head->next==NULL)
        return head;
    NODE prev=head,cur;
    cur=head->next;

        NODE temp=cur->next;
        cur->next=prev;
        if(temp==NULL||temp->next==NULL)
        {
            prev->next=temp;

        }
        prev->next=temp->next;
        prev=temp;
        cur=prev->next;


    return head;
    }



NODE display(NODE head)
{
    NODE newn;
    newn=head;

    if(head==NULL)
    {
        printf("the list is empty\n");
        return head;
    }
    printf("The elements in the list are\n");




  while(newn!=NULL)

  {

      printf("%d\t",newn->data);

      newn=newn->next;
  }
  printf("\n");


}

 int main()

{
    int choose;

    NODE head=NULL;
   while(1)
   {

   printf(" 1-Insert\n 2- swap\n 3-display\n ");

   scanf("%d",&choose);

        switch(choose)

         {


            case 1 : head=insert_end(head);

                        break;



            case 2: head=swap(head);
                    break;
            case 3:
                    head=display(head);
         }
   }
         return 0;

}

