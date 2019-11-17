#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void insertNodeAtBeginning();
void displayList();
void insertNodeAtLast();
void insertAtSpecifiedNode();
void deleteHeadNode();
void deleteLastNode();
void deleteSpecifiedNode();
int main()
{
    int n=0;
    while(n!=8)
    {
    printf("\n           Choose the option FRom the Given List \n");
    printf("\n           ====================================================\n");
    printf("1.Add Node at Begin\n 2.Add Node at Last\n 3.Add Node at Random\n4. Display List\n 5.delete at begin \n" );
    printf("6.Delete at Last\n 7. Delete at random \n 8. Exit \nEnter Your Choice\n");
    scanf("%d",&n);

        switch(n)
        {
        case 1:
            insertNodeAtBeginning();
            break;
        case 2:
            insertNodeAtLast();
            break;
        case 3:
            insertAtSpecifiedNode();
            break;
        case 4:
            displayList();
            break;
        case 5:
            deleteHeadNode();
            break;
        case 6:
            deleteLastNode();
            break;
        case 7:
            deleteSpecifiedNode();
            break;
        case 8:
            exit(0);
            break;
        }
    }

}
void insertNodeAtBeginning()
{
    struct node *newnode,*temp;
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
        printf("Unable to allocate memory");
    else
    {
    printf("Enter node value:\t");
    scanf("%d",&data);
    newnode->data=data;
    if(head==NULL)
    {
        head=newnode;
    newnode->next=head;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
            temp=temp->next;
        temp->next=newnode;
        newnode->next=head;
        head=newnode;
    }
    }

}
void displayList()
{
struct node *temp;
temp=head;
if(head==NULL)
    printf("\n UnderFlow\n");
else
{
while(temp->next!=head)
{
    printf("Data : \t %d \n",temp->data);
    temp=temp->next;
}
printf("Data :\t %d",temp->data);
}
}
void insertNodeAtLast()
{
 struct node *temp,*newnode;
 int data;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
    printf("Unable to allocate memory");
 else
 {
     printf("Enter the value:\t");
     scanf("%d",&data);
     newnode->data=data;
     if(head==NULL)
     {
         head=newnode;
        newnode->next=head;
     }
     else
     {
         temp=head;
      while(temp->next!=head)
      temp=temp->next;

      temp->next=newnode;
      newnode->next=head;
     }

 }
 printf("Node added \n");
}

void insertAtSpecifiedNode()
{
int data,node;
struct node *temp,*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
    printf("Unable to allocate memory");
else
    {
         printf("Enter value:\t");
            scanf("%d",&data);
        printf("\n Enter the element after which new node to be added:\t");
            scanf("%d",&node);

       newnode->data=data;
        if(head==NULL )
            printf("Element not found");
        else
        {
            temp=head;
            while(temp->data!=node && temp->next!=head)
            temp=temp->next;
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }
}
void deleteHeadNode()
{
    struct node *temp;
if(head==NULL)
    printf("Under flow");
else
if(head->next==NULL)
   head=NULL;
else
{
temp=head;
while(temp->next!=head)
temp=temp->next;

temp->next=head->next;
head=head->next;
}
}

void deleteLastNode()
{

    struct node *temp,*ptr;
    temp=head;
    while(temp->next!=head)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=head;
}
void deleteSpecifiedNode()
{
    struct node *temp,*ptr;
    int d;
    temp=head;
    printf("Enter the Node to be Deleted:\t");
    scanf("%d",&d);

    while(temp->data!=d)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=temp->next;
}




