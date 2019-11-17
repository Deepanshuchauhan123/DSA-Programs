#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
}*head;
void createList(int n);
void displayList();
void deleteHeadNode();
void deleteLastNode();
void deleteSpecifiedNode();
int main()
{
    int n;
    printf("No. of elements in linked-List");
    scanf("%d",&n);
    createList(n);
    printf("Elements of Linked List: \n");
    displayList();
    printf("Delete Head element: \n");
    deleteHeadNode();
    printf("Elements of Linked List: \n");
    displayList();
    printf("Delete Last element: \n");
    deleteLastNode();
    printf("Elements of Linked List: \n");
    displayList();
    deleteSpecifiedNode();
    printf("Elements of Linked List: \n");
    displayList();
    return 0;
}
void createList(int n)
{
    int i,data;
    struct node *newnode,*temp;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
        printf("Unable to allocate memory");
    else
    {
    printf("Enter the value of Node 1.\t");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
            printf("Unable to allocate element");
        else
        {

        printf("Enter the data of node %d \t",i);
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
        }
    }

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
void deleteHeadNode()
{
 head=head->next;
}

void deleteLastNode()
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

void  deleteSpecifiedNode()
{
    int n,p=0;
struct node *temp,*ptr;
printf("Enter the node to be deleted");
scanf("%d",&n);
temp=head;
while(temp->data!=n)
{
ptr=temp;
temp=temp->next;
if(temp->next==NULL)
{
    printf("Number not found");
     p=1;
    break;

}
}
if(p==0)
ptr->next=temp->next;
}













