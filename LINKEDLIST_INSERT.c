#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void createList(int n);
void displayList();
void insertNodeAtBeginning();
void insertNodeAtLast();
void insertAtSpecifiedNode(int num);
int main()
{
    int n,num;
    printf("Enter no. of nodes in the main list  ");
    scanf("%d",&n);
    createList(n);
    printf("Elements of linked list are: \n");
    displayList();
    printf("Enter a node in the starting of the list:\n");
    insertNodeAtBeginning();
    printf("\n Elements of linked list after inserting: \n");
    displayList();
    printf("Enter a node in the END of the list:\n");
    insertNodeAtLast();
    printf("\n Elements of linked list after inserting: \n");
    displayList();
    printf("\n Enter the element at the specified Node \n");
    printf("Enter the element after which it is added:\t");
    scanf("%d",&num);
    insertAtSpecifiedNode(num);
    printf("\n Elements of linked list after inserting: \n");
    displayList();
    return 0;
}
void createList(int n)
{
    struct node *newnode,*temp;
    int data,i;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
        printf("Unable to allocate memory \n");
    else{
    printf("Enter the data in node 1. ");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;

    for(i=2;i<=n;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
     {
     printf("Unable to allocate memory \n");
     break;
    }
    else
    {
      printf("Enter data of node %d \t",i);
      scanf("%d",&data);
       newnode->data=data;
       newnode->next=NULL;

       temp->next=newnode;
       temp=temp->next;
    }
    }
    printf("\n LINKED LIST CREATED SUCCESSFULLY:\n");
    }

}
void displayList()
{
  struct node *temp;
  if(head==NULL)
    printf("List is Empty");
  else{
    temp=head;
    while(temp!=NULL)
    {
        printf("%s%d\n","Data :  ",temp->data);
        temp=temp->next;
    }
  }
}
void insertNodeAtBeginning()
{   int data;
    struct node *newnode;

    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Unable to allocate memory:\n");
    else{
            printf("Enter the value to be added:   ");
            scanf("%d",&data);
            newnode->data=data;
            newnode->next=head;
            head=newnode;
        }
}
void insertNodeAtLast()
{
    struct node *newnode,*temp;
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode==NULL)
        printf("Unable to allocate memory");
    else
    {   temp=head;
        while(temp->next!=NULL)
        temp=temp->next;

        printf("Enter data of Node:");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
    }
}
void insertAtSpecifiedNode( int num)
{    int data;
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Unable to allocate memory");
    else
    {
        temp=head;
        while(temp->data!=num )
        {
            temp=temp->next;
            if(temp->next!=NULL)
            {
                printf("ELEMENT NOT FOUND");
                break;
            }
        }
        printf("Enter the value of node:\t");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=temp->next;
        temp->next=newnode;
    }
}












