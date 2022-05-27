#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int marks;
    struct node *prev;
    struct node *next;
};
typedef struct node*NODE;
NODE getnewnode(int N1)
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct node));
    if(newn==NULL)
    {
        printf("Memory not allocated\n");
        exit(0);
    }
    newn->marks=N1;
    newn->prev=NULL;
    newn->next=NULL;
    return newn;
}

NODE insert_end_dll(NODE head)
{

    NODE cur,temp;
    int N1;
    scanf("%d",&N1);
    temp=getnewnode(N1);
    if(head==NULL)
    {

        head=temp;
    }
    else
    {
        cur=head;
        while(cur->next!=NULL)
        cur=cur->next;
        cur->next=temp;
        temp->prev=cur;
    }
    return head;
}
void display_dll_firsttolast(NODE head)
{
    NODE cur;

    if(head==NULL)
    {
        printf("DLL marks list is empty\n");

    }
    else
    {
    cur=head;
    while(cur!=NULL)
      {
        printf("%d ",cur->marks);
        cur=cur->next;
      }
    }

}
void deleteNode(NODE head_ref, NODE del)
{

    if (head_ref == NULL || del == NULL)
        return;


    if (head_ref == del)
        head_ref = del->next;


    if (del->next != NULL)
        del->next->prev = del->prev;


    if (del->prev != NULL)
        del->prev->next = del->next;


    free(del);

    return;
}
void deleteEvenNodes(NODE head_ref)
{
    NODE ptr = head_ref;
    NODE next;

    while (ptr != NULL) {
        next = ptr->next;
        if (ptr->marks % 2 == 0)
            deleteNode(head_ref, ptr);
        ptr = next;
    }
}


int main()
{

    struct node* head;
    head=NULL;
           int N,i;
            scanf("%d",&N);
    for(i=0;i<N;i++)
    {
            head=insert_end_dll(head);
    }

            display_dll_firsttolast(head);
            deleteEvenNodes(head);
             printf("\n");

             display_dll_firsttolast(head);


        }
