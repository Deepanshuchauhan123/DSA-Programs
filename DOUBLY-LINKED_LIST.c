#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    struct node *next;
    int data;
}*head;

void insertion_beginning();
void insertion_last();
void insertion_specified();
void display();
void delete_At_Beginning();
void delete_At_Last();
int  delete_Specified_Node();
int main()
{
    int n=0;
    while(n!=9)
  {

    printf("\t Enter your Choice \n");
    printf("\n 1. Insert at begin \n 2. Insert at Last \n 3. Insert at specified \n 4.Display\n");
    printf("\n 5. Delete first Node \n 6. Delete Last Node \n 7. Delete Specified Node \n 8. Exit ");
    printf("Enter the choice:\t");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        insertion_beginning();
        break;
    case 2:
        insertion_last();
        break;
    case 3:
        insertion_specified();
        break;
    case 4:
        display();
        break;
    case 5:
        delete_At_Beginning();
        break;
    case 6:
        delete_At_Last();
        break;
    case 7:
        delete_Specified_Node();
        break;
    case 8:
        exit(0);

    }
  }
}

void insertion_beginning()
{
    struct node *newnode;
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("\n unable to allocate memory \n");
    else
    {
        printf("ENter the node value:\t");
        scanf("%d",&data);
        newnode->data=data;
        if(head==NULL)
        {
            newnode->next=NULL;
            newnode->prev=NULL;
            head=newnode;
        }
        else
        {
            newnode->prev=NULL;
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
}
void insertion_last()
{
struct node *newnode,*temp;
int data;
newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
        printf("\n unable to allocate memory \n");
    else
    {
        printf("\n ENter the node value:\t");
        scanf("%d",&data);
        newnode->data=data;
        if(head==NULL)
        {
            newnode->next=NULL;
            newnode->prev=NULL;
            head=newnode;
        }
        else
        {
            temp=head;
            while(temp->next)
                temp=temp->next;

            temp->next=newnode;
            newnode->next=NULL;
            newnode->prev=temp;

        }
    }
}
void insertion_specified()
{
struct node *newnode,*temp,*ptr;
int data,num;
newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
        printf("\n unable to allocate memory \n");
    else
    {
        printf("\n ENter the node value:\t");
        scanf("%d",&data);
        printf("Enter after which node to be added:\t");
        scanf("%d",&num);
        newnode->data=data;
        temp=head;
        while(temp->data!=num)
           temp=temp->next;
           ptr=temp->next;
           newnode->next=ptr;
           ptr->prev=newnode;
           temp->next=newnode;
           newnode->prev=temp;

}
}
void display()
{
struct node *temp;
printf("\n Display data is: \n");
temp=head;
if(head==NULL)
    printf("list is empty");
else
{
while(temp->next!=NULL)
{
    printf("\n %d",temp->data);
    temp=temp->next;
}
 printf("\n %d",temp->data);
}
}

void delete_At_Beginning()
{
    struct node *temp;
    if(head->next==NULL)
    {
        head=NULL;
        printf("List is Empty");
    }
    else
    {
    temp=head->next;
    temp->prev=NULL;
        head=temp;

    }
}

void delete_At_Last()
{
struct node *temp,*ptr;
temp=head;
while(temp->next!=NULL)
{
    ptr=temp;
    temp=temp->next;
}
ptr->next=NULL;
}
int delete_Specified_Node()
{
struct node *temp,*ptr;
int num;
temp=head;
printf("Enter the node to be deleted: \t");
scanf("%d",&num);
while(temp->data!=num)
{
    ptr=temp;
    temp=temp->next;
    if(temp->next==NULL)
    {
        printf("Node Not found");
        return 0;
    }
}
temp=temp->next;
temp->prev=ptr;
ptr->next=temp;
return 0;
}











