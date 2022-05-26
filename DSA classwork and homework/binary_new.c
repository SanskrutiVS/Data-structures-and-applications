#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data; //node will store an integer
    struct node *right_child; // right child
    struct node *left_child; // left child
};

void search(struct node *root, int x)
{
   if(root==NULL)
   {
     printf("empty\n");
   }


    else if(root->data==x)
    {//if root->data is x then the element is found

        printf("key found %d",x);
    }
    else if(x>root->data) // x is greater, so we will search the right subtree
         search(root->right_child, x);
    else if(x>root->data)
        {
         search(root->left_child,x);
        }
    else

      {
           printf("key not found %d",x);
      }

}



//function to create a node
struct node* new_node(int x)
{
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = x;
    p->left_child = NULL;
    p->right_child = NULL;

    return p;
}

struct node* insert(struct node *root, int x)
{
    //searching for the place to insert
    if(root==NULL)
        return new_node(x);
    else if(x>root->data) // x is greater. Should be inserted to right
        root->right_child = insert(root->right_child, x);
    else // x is smaller should be inserted to left
        root->left_child = insert(root->left_child,x);
    return root;
}



void display(struct node *root)
{
    if(root!=NULL) // checking if the root is not null
    {
        display(root->left_child); // visiting left child
        printf(" %d ", root->data); // printing data at root
        display(root->right_child);// visiting right child
    }
}

int main()
{
struct node *head=NULL;
int data,key,choice;
for(;;)
{
printf("\n 1-INSERT and 2-DISPLAY 3-SEARCH \n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter the data\n");
        scanf("%d",&data);

        head=insert(head,data);
        break;
case 2: display(head);
        break;
case 3:
       printf("enter key\n");
       scanf("%d",&key);
      search(head,key);




}
}
return 0;
}
